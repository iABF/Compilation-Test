# Compilation-Test

使用 Lex & Yacc 实现的简单 C 语言编译器，作为*编译系统*课程作业。

## I 实现

### 1. 概述

#### 1.1 支持功能

1. 数据类型：`int`
2. 语句：注释，声明，赋值，`while` 循环，`for` 循环，`if`-`else` 判断，输入（`read()`），输出（`print()`）
3. 算数运算：`+`, `-`, `*`, `/`, `%`, `^`（取幂）
4. 关系运算：`==`, `>`, `<`, `>=`, `<=`, `!=`
5. 逻辑运算：`&&`, `||`, `!`
6. 支持函数的声明以及调用、允许参数及返回值
7. 支持多维数组的声明及引用
8. 实现和 C 语言相似的作用域控制
9. 实现了各个方面的类型检查

#### 1.2 运行环境

操作系统：Windows 10 家庭中文版

Python: PyCharm 2019.3 (Professional Edition)

C++: Microsoft Visual Studio Community 2017 

Lex & Yacc: Parser Generator Version 2.07

#### 1.3 运行说明

由于本项目无法使用 `yyin` 进行文件输入，所以在使用时需要使用控制台动态输入。故在使用前需知晓C语言代码内的函数和外部声明总数（比如 2 个函数和 0 个外部声明，总数为 2）。之后在项目文件 `myparser.y` 中的 108 行：

```C++
if(++funccount == <?>)generator->generate(); 
```

中修改 `<?>` 为 2，随后使用 Parser Generator 生成相应的头文件和源文件之后运行项目即可。

运行后生成文件 `out_intermediate_code.txt`，此即生成的中间代码。

随后修改项目文件 `optimizer.py` 和 `asmgenerator.py` 中的路径变量 `path` 和 `path2` 为希望的优化后代码以及汇编代码存放地址。

随后依次运行 `optimizer.py` 和 `asmgenerator.py`，生成的 `optimized_code.txt` 和 `asm_code.txt` 即为优化后中间代码和汇编代码。

最后使用 `Mars4_5.jar` 运行汇编代码以测试生成代码的正确性。

### 2. 词法分析

词法分析工作在项目初期完成。使用 Lex 进行词法分析，用于识别的关键正则表达式如下：

```
delim		[ \t\n]
ws			{delim}+
letter		[A-Za-z_]
digit		[0-9]
id			{letter}({letter}|{digit})*
number		{digit}+
sglcmmt		\/\/(.)*\n
mtlcmmt		\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/
def			(#define)|(#DEFINE)
include		(#include)|(#INCLUDE)
string		\"(.)*\"
abra		\<(.)*\>
sglstring	\'(.)*\'
lli			long[ ]long[ ]int
li			long[ ]int
error		{digit}+{letter}+({letter}|{digit})*
```

为识别的 `id` 构建简单的遍历搜索符号表 `symtable`（在语义分析中被弃用）。

```c
struct symtable
{
    char *name;
    double value;
    double (*funcptr)();
};

struct symtable *symlook(char *s);
```

`symlook` 定义：

```C
struct symtable *symlook(char *s)
{
	char *p;
	struct symtable *sp;
	for(sp = symtable; sp < &symtable[MAXSYM]; sp++) {
		if(sp->name && !strcmp(sp->name, s))
			return sp;
		if(!sp->name) {
			sp->name = strdup(s);
			return sp;
		}
	}
	exit(1);
}
```

### 3. 语法分析

 #### 3.1 文法

文法的构建在初期是手工构建的，后期借鉴了教材以及附件（未上传至 GitHub）中 `1004.pdf` 的来自南京大学的附录。具体文法见项目文件中的 `myparser.y`。

#### 3.2 语法树

语法树的节点均继承自 `ParseTreeNode`，其定义如下：（见 `ParseTree/ParseTreeNode.h` 和 `ParseTree/ParseTreeNode.cpp`）

```c++
enum NodeId {
	arraynode,
	Default,
	varnode,
	accessnode,
	expressionnode,
	operatornode,
	logicalnode,
	ornode,
	andnode,
	notnode,
	relnode,
	tempnode,
	unarynode,
	constnode,
	statementnode,
	functioncallnode,
};
class ParseTreeNode {
	ParseTreeNode *peer; // allows a peer-chain
	ParseTreeNode *child; // only one child allowed
protected:
	ParseTreeNode* getLastPeerNode();
	void printNode(ParseTreeNode *root, int depth, FILE *file);
	virtual void printText(FILE *file, int depth) = 0;
public:
	NodeId nodeId;
	int nodeType; // for expression: op=1, varbasic=2, vararray=3, constnode=4
	ParseTreeNode();
	void print();
	inline ParseTreeNode* getNextPeerNode() { return this->peer; }
	inline ParseTreeNode* getChildNode() { return this->child; }
	inline void addChildNode(ParseTreeNode *c) { this->child = c; }
	void addPeerNode(ParseTreeNode *p);
	virtual void setBlock(ParseTreeNode *b) {};
	virtual double getValue() { return 0; };
	virtual void setValue(double val) {};
};
```

部分函数的作用是输出语法树框架，在后期已被弃用。

全部的语法树节点的定义及实现见目录 `ParseTree`。

这颗语法树在构建初期其实蕴含了拓展接口，其意是后期语义分析和中间代码生成工作可以同语法树的搭建共同进行。然而在后期中间代码生成的实现中，发现很难自底向上地生成中间代码，于是语法树的中间代码生成部分以及语义分析部分的代码就被删除了。此时，在语法分析过程中只达成一项工作，即自底向上地生成一颗仅保存节点相对位置的语法树，在整棵树生成完毕后再自顶向下地进行语义分析和生成中间代码。

语法树的搭建见项目文件中的 `myparser.y`。

#### 3.3 语义分析和中间代码生成

同之前所说，在进行中间代码生成的实现时，重构了之前的语法树和语义分析代码，分离构建语法树和语义分析，使得语法树的构建过程是自底向上的，语义分析和中间代码生成是自顶向下的。

类型检查和错误检测均使用 `assert` 方法，其实现穿插在中间代码生成的过程中。

作用域的实现参考了教材中的*《附录 A 一个完整的编译器前端》*。使用类 `Env` 模拟一块作用域，该域的符号表被定义在其中。见项目文件中的 `symtable.h`。

```c++
class Env {
private:
	std::unordered_map<std::string, VarNode*>table;
	Env *father;
public:
	bool isfunc;
	TypeNode *returnType;
	Env(); // only use once
	Env(Env *f);
	VarNode* findSymbol(std::string s); // find in this environment
	VarNode* findDeepSymbol(std::string s); // find in this environment and all fathers
	void insert(std::string s, VarNode *var, int offset);
};
```

具体实现见项目文件 `symtable.cpp`。

中间代码生成的实现参考了教材中的*《附录 A 一个完整的编译器前端》*。使用一个类 `InterCodeGenerator` 模拟中间代码生成器，函数表被定义在其中。存放作用域的栈也定义在其中。见项目文件 `InterCodeGenerator.h` 和 `InterCodeGenerator.cpp`。

```c++
class InterCodeGenerator {
	RootNode *root;
	Env *rootEnv; // Root Environment
	void initializeFunction();
	void generateTopLevelDefinition(TopLevelDefinitionNode *node);
	void generateParameter(ParamNode *node);
	void generateCodeBlock(CompoundStatementNode *node, int beg, int aft);
	void generateStatement(StatementNode *node, int beg, int aft);
	void generateAssign(AssignNode *node);
	void generateAssignArray(AssignArrayNode *node);
	void generateWhileLoopStatement(WhileLoopStatementNode *node, int beg, int aft);
	void generateForLoopStatement(ForLoopStatementNode *node, int beg, int aft);
	void generateSelectionStatement(SelectionStatementNode *node, int beg, int aft);
	void generateVarDefinition(StatementNode *node); // [Enhanced edition] of TopLevelDefinition::var
	void generateFunctionCallStatement(FunctionStatement *node);
	void generateReturnStatement(ReturnStatement *node);
	ExpressionNode* gen(ExpressionNode* node);
	ExpressionNode* reduce(ExpressionNode* node);
	std::string toString(ExpressionNode* node);
	void jumping(ExpressionNode* node, int t, int f);
	void emitjumps(std::string boolean, int t, int f);
	void refresh(LogicalNode* node);
	ExpressionNode* refreshID(ExpressionNode* node);
public:
	InterCodeGenerator(RootNode *r);
	void generate();
	std::vector<Env*>envStack;
	std::unordered_map<std::string, FunctionNode*>functionTable;
};
```

各种表达式的实现均被集成到了函数 `gen()`，`reduce()`，`toString()`，`jumping()`，`emitjumps()`。具体实现如下：

```c++
ExpressionNode * InterCodeGenerator::gen(ExpressionNode * node)
{
	if (node->nodeId == NodeId::expressionnode
		|| node->nodeId == NodeId::tempnode) {
		return node;
	}
	else if (node->nodeId == NodeId::constnode) {
		ConstNode *ans = (ConstNode*)node;
		TempNode *t = new TempNode(node->type);
		emit(toString(t) + " = " + ans->name);
		return t;
	}
	else if (node->nodeId == NodeId::operatornode) {
		return new OperatorNode(((OperatorNode*)node)->operatorType, reduce(((OperatorNode*)node)->left), reduce(((OperatorNode*)node)->right));
	}
	else if (node->nodeId == NodeId::varnode) {
		assert(this->envStack.back()->findDeepSymbol(node->name) != NULL);
		return this->envStack.back()->findDeepSymbol(node->name);
	}
	else if (node->nodeId == NodeId::accessnode) {
		AccessNode *cur = (AccessNode*)refreshID(node);
		return new AccessNode(cur->arr, reduce(cur->index), cur->type);
	}
	else if (node->nodeId >= NodeId::logicalnode && node->nodeId <= NodeId::relnode) {
		refresh((LogicalNode*)node);
		int f = newlabel(); // false label
		int a = newlabel(); // after this expression
		TempNode *temp = new TempNode(node->type);
		jumping(node, 0, f);
		emit(toString(temp) + " = true");
		emit("goto L" + int2str(a));
		emitLabel(f);
		emit(toString(temp) + " = false");
		emitLabel(a);
		return temp;
	}
	else if (node->nodeId == NodeId::unarynode) {
		return new UnaryNode(((UnaryNode*)node)->operatorType, reduce(((UnaryNode*)node)->expr));
	}
	else if (node->nodeId == NodeId::functioncallnode) {
		assert(this->functionTable.find(node->name) != this->functionTable.end());
		FunctionCallNode *bas = (FunctionCallNode*)node;
		FunctionNode* cur = this->functionTable[node->name];
		assert(cur->returnType->btype != BasicType::Void);
		if (bas->callParamList == NULL) {
			TempNode *temp = new TempNode(cur->returnType);
			emit(toString(temp) + " = CALL " + node->name);
			return temp;
		}
		else {
			ParseTreeNode *testc = cur->paramList;
			int testcnt = 1;
			while (testc->getNextPeerNode() != NULL) {
				testc = testc->getNextPeerNode();
				testcnt++;
			}
			std::stack<ExpressionNode*>argstack;
			int argCount = 0;
			argstack.push(reduce(bas->callParamList));
			argCount++;
			ExpressionNode *nw = bas->callParamList;
			while (nw->getNextPeerNode() != NULL) {
				nw = (ExpressionNode*)nw->getNextPeerNode();
				argstack.push(reduce(nw));
				argCount++;
			}
			assert(testcnt == argCount);
			while (!argstack.empty()) {
				emit("arg " + toString(argstack.top()));
				argstack.pop();
			}
			TempNode *temp = new TempNode(cur->returnType);
			emit(toString(temp) + " = CALL " + node->name);
			return temp;
		}
	}
	return NULL;
}

ExpressionNode * InterCodeGenerator::reduce(ExpressionNode * node)
{
	if (node->nodeId == NodeId::expressionnode
		|| node->nodeId == NodeId::tempnode) {
		return node;
	}
	else if (node->nodeId == NodeId::constnode) {
		ConstNode *ans = (ConstNode*)node;
		TempNode *t = new TempNode(node->type);
		emit(toString(t) + " = " + ans->name);
		return t;
	}
	else if (node->nodeId == NodeId::operatornode) {
		ExpressionNode *ans = gen(node);
		TempNode *t = new TempNode(node->type);
		emit(toString(t) + " = " + toString(ans));
		return t;
	}
	else if (node->nodeId == NodeId::varnode) {
		assert(this->envStack.back()->findDeepSymbol(node->name) != NULL);
		return this->envStack.back()->findDeepSymbol(node->name);
	}
	else if (node->nodeId == NodeId::accessnode) {
		assert(this->envStack.back()->findDeepSymbol(((AccessNode*)node)->arr->name) != NULL);
		ExpressionNode *ans = gen(node);
		TempNode *t = new TempNode(node->type);
		emit(toString(t) + " = " + toString(ans));
		return t;
	}
	else if (node->nodeId >= NodeId::logicalnode && node->nodeId <= NodeId::relnode) {
		refresh((LogicalNode*)node);
		return node;
	}
	else if (node->nodeId == NodeId::functioncallnode) {
		assert(this->functionTable.find(node->name) != this->functionTable.end());
		FunctionCallNode *bas = (FunctionCallNode*)node;
		FunctionNode* cur = this->functionTable[node->name];
		assert(cur->returnType->btype != BasicType::Void);
		if (bas->callParamList == NULL) {
			TempNode *temp = new TempNode(cur->returnType);
			emit(toString(temp) + " = CALL " + node->name);
			return temp;
		}
		else {
			ParseTreeNode *testc = cur->paramList;
			int testcnt = 1;
			while (testc->getNextPeerNode() != NULL) {
				testc = testc->getNextPeerNode();
				testcnt++;
			}
			std::stack<ExpressionNode*>argstack;
			int argCount = 0;
			argstack.push(reduce(bas->callParamList));
			argCount++;
			ExpressionNode *nw = bas->callParamList;
			while (nw->getNextPeerNode() != NULL) {
				nw = (ExpressionNode*)nw->getNextPeerNode();
				argstack.push(reduce(nw));
				argCount++;
			}
			assert(testcnt == argCount);
			while (!argstack.empty()) {
				emit("arg " + toString(argstack.top()));
				argstack.pop();
			}
			TempNode *temp = new TempNode(cur->returnType);
			emit(toString(temp) + " = CALL " + node->name);
			return temp;
		}
	}
	return NULL;
}

std::string InterCodeGenerator::toString(ExpressionNode * node)
{
	if (node->nodeId == NodeId::varnode) {
		assert(this->envStack.back()->findDeepSymbol(node->name) != NULL);
		return "var" + int2str(this->envStack.back()->findDeepSymbol(node->name)->varNumber);
	}
	else if (node->nodeId == NodeId::expressionnode || node->nodeId == NodeId::constnode) {
		return node->name;
	}
	else if (node->nodeId == NodeId::operatornode) {
		return toString(((OperatorNode*)node)->left) + " " + node->name + " " + toString(((OperatorNode*)node)->right);
	}
	else if (node->nodeId == NodeId::accessnode) {
		// only used after index->reduce()
		assert(this->envStack.back()->findDeepSymbol(((AccessNode*)node)->arr->name) != NULL);
		return toString(((AccessNode*)node)->arr) + " [ " + toString(((AccessNode*)node)->index) + " ] ";
	}
	else if (node->nodeId >= NodeId::logicalnode && node->nodeId <= NodeId::relnode && node->nodeId != NodeId::notnode) {
		refresh((LogicalNode*)node);
		return toString(((LogicalNode*)node)->left) + " " + node->name + " " + toString(((LogicalNode*)node)->right);
	}
	else if (node->nodeId == NodeId::notnode) {
		refresh((LogicalNode*)node);
		return node->name + " " + toString(((NotNode*)node)->right);
	}
	else if (node->nodeId == NodeId::tempnode) {
		return "temp" + int2str(((TempNode*)node)->number);
	}
	else if (node->nodeId == NodeId::unarynode) {
		return node->name + " " + toString(((UnaryNode*)node)->expr);
	}
	return NULL;
}

void InterCodeGenerator::jumping(ExpressionNode * node, int t, int f)
{
	if (node->nodeId == NodeId::expressionnode
		|| node->nodeId == NodeId::operatornode
		|| node->nodeId == NodeId::varnode
		|| node->nodeId == NodeId::logicalnode
		|| node->nodeId == NodeId::tempnode
		|| node->nodeId == NodeId::unarynode) {
		emitjumps(toString(node), t, f);
	}
	else if (node->nodeId == NodeId::accessnode) {
		// for bool in array
		emitjumps(toString(reduce(node)), t, f);
	}
	else if (node->nodeId == NodeId::ornode) {
		int label;
		if (!t)label = newlabel();
		else label = t;
		jumping(((OrNode*)node)->left, label, 0);
		jumping(((OrNode*)node)->right, t, f);
		if (!t)emitLabel(label);
	}
	else if (node->nodeId == NodeId::andnode) {
		int label;
		if (!f)label = newlabel();
		else label = f;
		jumping(((AndNode*)node)->left, 0, label);
		jumping(((AndNode*)node)->right, t, f);
		if (!f)emitLabel(label);
	}
	else if (node->nodeId == NodeId::notnode) {
		jumping(((NotNode*)node)->right, f, t);
	}
	else if (node->nodeId == NodeId::relnode) {
		ExpressionNode *l = reduce(((RelNode*)node)->left);
		ExpressionNode *r = reduce(((RelNode*)node)->right);
		std::string boolean = toString(l) + " " + node->name + " " + toString(r);
		emitjumps(boolean, t, f);
	}
	else if (node->nodeId == NodeId::constnode) {
		if (((ConstNode*)node) == ConstNode::True && t)emit("goto L" + int2str(t));
		else if (((ConstNode*)node) == ConstNode::False && f)emit("goto L" + int2str(f));
	}
}

void InterCodeGenerator::emitjumps(std::string boolean, int t, int f)
{
	if (t&&f) {
		emit("if " + boolean + " goto L" + int2str(t));
		emit("goto L" + int2str(f));
	}
	else if (t)emit("if " + boolean + " goto L" + int2str(t));
	else if (f)emit("iffalse " + boolean + " goto L" + int2str(f));
}
```

每种类型的表达式均有一个相应的函数进行实现。这里给出 `while`、`for`、`if` 控制流的实现，其余实现见项目文件 `InterCodeGenerator.cpp`。

```c++
void InterCodeGenerator::generateWhileLoopStatement(WhileLoopStatementNode * node, int beg, int aft)
{
	refresh((LogicalNode*)node->condition);
	assert(node->condition->type->btype == BasicType::Bool);
	Env *whileEnv = new Env(this->envStack.back());
	this->envStack.push_back(whileEnv);
	node->next = aft;
	jumping(node->condition, 0, aft);
	int label = newlabel();
	emitLabel(label);
	generateStatement(node->block, label, beg);
	emit("goto L" + int2str(beg));
	this->envStack.pop_back();
}

void InterCodeGenerator::generateForLoopStatement(ForLoopStatementNode * node, int beg, int aft)
{
	Env *forEnv = new Env(this->envStack.back());
	this->envStack.push_back(forEnv);
	int loopbegin;
	if (node->first == NULL)loopbegin = beg;
	else {
		loopbegin = newlabel();
		if (node->first->nodeId == NodeId::statementnode) {
			generateVarDefinition((StatementNode*)node->first);
		}
		else if (node->first->nodeId == NodeId::operatornode && ((OperatorNode*)node)->operatorType == 1) {
			// this is an assignment-expression
			OperatorNode *cur = (OperatorNode*)node;
			ExpressionNode *lvalue = cur->left;
			assert(lvalue->nodeId == NodeId::varnode);
			generateAssign(new AssignNode((VarNode*)lvalue, cur->right));
		}
		emitLabel(loopbegin);
	}
	int inloop, loopend;
	if (node->second != NULL) {
		assert(node->second->nodeId >= NodeId::logicalnode && node->second->nodeId <= NodeId::relnode);
		refresh((LogicalNode*)node->second);
		jumping(node->second, 0, aft);
		inloop = newlabel();
	}
	else inloop = loopbegin;
	if (node->third == NULL)loopend = loopbegin;
	else loopend = newlabel();
	if (inloop != loopbegin)emitLabel(inloop);
	generateStatement(node->block, inloop, loopend);
	if (loopend != loopbegin)emitLabel(loopend);
	if (node->third != NULL && node->third->nodeId == NodeId::operatornode && ((OperatorNode*)node)->operatorType == 1) {
		// this is an assignment-expression
		OperatorNode *cur = (OperatorNode*)node;
		ExpressionNode *lvalue = cur->left;
		assert(lvalue->nodeId == NodeId::varnode);
		generateAssign(new AssignNode((VarNode*)lvalue, cur->right));
	}
	emit("goto L" + int2str(loopbegin));
	this->envStack.pop_back();
}

void InterCodeGenerator::generateSelectionStatement(SelectionStatementNode * node, int beg, int aft)
{
	refresh((LogicalNode*)node->condition);
	assert(node->condition->type->btype == BasicType::Bool);
	Env *selectionEnv = new Env(this->envStack.back());
	this->envStack.push_back(selectionEnv);
	if (node->falseBlock == NULL) {
		int label = newlabel();
		jumping(node->condition, 0, aft);
		emitLabel(label);
		generateStatement(node->trueBlock, label, aft);
	}
	else {
		int label1 = newlabel();
		int label2 = newlabel();
		jumping(node->condition, 0, label2);
		emitLabel(label1);
		generateStatement(node->trueBlock, label1, aft);;
		emit("goto L" + int2str(aft));
		emitLabel(label2);
		generateStatement(node->falseBlock, label2, aft);;
	}
	this->envStack.pop_back();
}
```

函数定义和外部变量定义的实现在函数 `generateTopLevelDefinition()` 中。

```c++
void InterCodeGenerator::generateTopLevelDefinition(TopLevelDefinitionNode * node)
{
	TypeNode *type = (TypeNode*)node->getChildNode();
	if (type->getNextPeerNode()->nodeId == NodeId::varnode) {
		VarNode *cur = (VarNode*)type->getNextPeerNode()->getNextPeerNode();
		assert(this->envStack.back()->findSymbol(cur->name) == NULL);
		if (cur->type == NULL) {
			cur->setType(type);
			extern int offset;
			this->envStack.back()->insert(cur->name, cur, offset);
			offset += cur->type->width;
		}
		else {
			assert(cur->type->tag != Tag::Basic);
			if (cur->type->tag == Tag::Array) {
				ArrayNode *arr = (ArrayNode*)cur->type;
				arr->setType(type);
				extern int offset;
				this->envStack.back()->insert(cur->name, cur, offset);
				offset += cur->type->width;
			}
		}
		while (cur->getNextPeerNode() != NULL) {
			cur = (VarNode*)cur->getNextPeerNode();
			assert(this->envStack.back()->findSymbol(cur->name) == NULL);
			if (cur->type == NULL) {
				cur->setType(type);
				extern int offset;
				this->envStack.back()->insert(cur->name, cur, offset);
				offset += cur->type->width;
			}
			else {
				assert(cur->type->tag != Tag::Basic);
				if (cur->type->tag == Tag::Array) {
					ArrayNode *arr = (ArrayNode*)cur->type;
					arr->setType(type);
					extern int offset;
					this->envStack.back()->insert(cur->name, cur, offset);
					offset += cur->type->width;
				}
			}
		}
	}
	else {
		// function definition
		FunctionNode *cur = (FunctionNode*)type->getNextPeerNode();
		assert(this->envStack.size() == 1);
		CompoundStatementNode *body = (CompoundStatementNode*)cur->getNextPeerNode();
		cur->setReturnType(type);
		cur->setBody(body);
		Env *functionEnv = new Env(this->envStack.back());
		functionEnv->isfunc = true;
		functionEnv->returnType = type;
		this->envStack.push_back(functionEnv); // enter new environment
		//insert function
		assert(this->functionTable.find(cur->name) == this->functionTable.end());
		this->functionTable[cur->name] = cur; // insertion
		emit("function " + cur->name + ":");
		/* generate code for parameter */
		ParamNode *par = cur->paramList;
		if (par != NULL) {
			generateParameter(par);
			while (par->getNextPeerNode() != NULL) {
				par = (ParamNode*)par->getNextPeerNode();
				generateParameter(par);
			}
		}
		/* generate code for body */
		int begin = newlabel();
		int after = newlabel();
		emitLabel(begin);
		generateCodeBlock(body, begin, after);
		emitLabel(after);
		/* leave function environment */
		this->envStack.pop_back();
	}
}
```

输入输出函数的定义在函数 `initializeFunction()` 中实现。

```c++
void InterCodeGenerator::initializeFunction()
{
	FunctionNode *prfunc = new FunctionNode("print");
	prfunc->returnType = new TypeNode("void");
	VarNode *prva = new VarNode("arg");
	prva->type = new TypeNode("int");
	prfunc->paramList = new ParamNode(new TypeNode("int"), prva);
	functionTable["print"] = prfunc;
	FunctionNode *refunc = new FunctionNode("read");
	refunc->returnType = new TypeNode("int");
	refunc->paramList = NULL;
	functionTable["read"] = refunc;
}
```

### 4. 代码优化

代码优化的主要内容是消除死代码。采用 Python 实现，其实现在项目文件中的 `optimize.py` 中。通过两次循环消除了无用的 Label 和只出现了一次的变量。

```python
import re

path = 'D:\\Program\\C++\\Compilation Test\\Compilation Test\\out_intermediate_code.txt'
path2 = 'D:\\Program\\C++\\Compilation Test\\Compilation Test\\optimized_code.txt'
file = open(path)
lines = file.read().split('\n')
file.close()
labelMap = set()
for line in lines:
    cur = re.search(r'goto L(\d)+', line)
    if cur is not None:
        labelMap.add(cur.group()[6:])
midLines = []
for line in lines:
    cur = re.match(r'L(\d)+:', line)
    if cur is not None:
        if cur.group()[1:-1] in labelMap:
            midLines.append(line)
    else:
        midLines.append(line)
tempMap = dict()
for line in midLines:
    pattern = re.compile(r'temp(\d+)')
    res = pattern.findall(line)
    ifCall = re.search('CALL', line)
    for tmp in res:
        if tmp in tempMap:
            if ifCall is not None:
                tempMap[tmp] += 1000
            tempMap[tmp] += 1
        else:
            tempMap[tmp] = 1
            if ifCall is not None:
                tempMap[tmp] += 1000
deleteList = set()
for item in tempMap.items():
    if item[1] == 1:
        deleteList.add(item[0])
finalLines = []
for line in midLines:
    pattern = re.compile(r'temp(\d)+')
    res = pattern.findall(line)
    if not set(res) & deleteList:
        finalLines.append(line)
file = open(path2, 'w')
for line in finalLines:
    file.write(line + '\n')
file.close()
```

### 5. 代码生成

目标代码采用 MIPS 汇编码，采用 Python 实现。

进行代码生成前首先生成输入输出函数的系统调用代码。

```assembly
read:
    li $v0,4
    la $a0,_prompt
    syscall
    li $v0,5
    syscall
    jr $ra
print:
    li $v0,1
    syscall
    li $v0,4
    la $a0,_ret
    syscall
    move $v0,$0
    jr $ra
```

随后为了方便实现，将所有 `iffalse` 代码转为 `if` 代码：

```python
for line in sep_lines:
        if line[0] == 'iffalse':
            line[0] = 'if'
            if line[2] == '>':
                line[2] = '<='
            elif line[2] == '<':
                line[2] = '>='
            elif line[2] == '>=':
                line[2] = '<'
            elif line[2] == '<=':
                line[2] = '>'
            elif line[2] == '==':
                line[2] = '!='
            elif line[2] == '!=':
                line[2] = '=='
```

具体代码见项目文件 `asmgenerator.py`。

## II 实验结果

### 1. 递归函数调用（见目录result1）

C语言代码 `Test.txt`：

```c
int fibonacci(int n) {
    if (n <= 2)return 1;
    else {
        int a, b;
        a = fibonacci(n - 1);
        b = fibonacci(n - 2);
        int c = a + b;
        return c;
    }
}

int main() {
    int result, times;
    times = read();
    int i = 0;
    while (i < times) {
        int m = read();
        result = fibonacci(m);
        print(result);
        i = i + 1;
    }
    return 0;
}
```

中间代码 `out_intermediate_code.txt`：

```
function fibonacci:
PARAM var0
L1:
temp1 = 2
iffalse var0 <= temp1 goto L4
L3:
temp2 = 1
RETURN temp2
goto L2
L4:
L5:
temp3 = 1
temp4 = var0 - temp3
arg temp4
temp5 = CALL fibonacci
var1 = temp5
L6:
temp6 = 2
temp7 = var0 - temp6
arg temp7
temp8 = CALL fibonacci
var2 = temp8
L7:
var3 = var1 + var2
L8:
RETURN var3
L2:
function main:
L9:
L11:
temp9 = CALL read
var5 = temp9
L12:
temp10 = 0
var6 = temp10
L13:
iffalse var6 < var5 goto L14
L15:
temp11 = CALL read
var7 = temp11
L16:
arg var7
temp12 = CALL fibonacci
var4 = temp12
L17:
arg var4
CALL print
L18:
temp13 = 1
var6 = var6 + temp13
goto L13
L14:
temp14 = 0
RETURN temp14
L10:

```

优化后代码 `optimized_code.txt`：

```
function fibonacci:
PARAM var0
temp1 = 2
iffalse var0 <= temp1 goto L4
temp2 = 1
RETURN temp2
goto L2
L4:
temp3 = 1
temp4 = var0 - temp3
arg temp4
temp5 = CALL fibonacci
var1 = temp5
temp6 = 2
temp7 = var0 - temp6
arg temp7
temp8 = CALL fibonacci
var2 = temp8
var3 = var1 + var2
RETURN var3
L2:
function main:
temp9 = CALL read
var5 = temp9
temp10 = 0
var6 = temp10
L13:
iffalse var6 < var5 goto L14
temp11 = CALL read
var7 = temp11
arg var7
temp12 = CALL fibonacci
var4 = temp12
arg var4
CALL print
temp13 = 1
var6 = var6 + temp13
goto L13
L14:
temp14 = 0
RETURN temp14


```

汇编代码 `asm_code.txt`：

```assembly
.data
_prompt: .asciiz "Enter an integer:"
_ret: .asciiz "\n"
.globl main
.text
jal main
read:
    li $v0,4
    la $a0,_prompt
    syscall
    li $v0,5
    syscall
    jr $ra
print:
    li $v0,1
    syscall
    li $v0,4
    la $a0,_ret
    syscall
    move $v0,$0
    jr $ra
fibonacci:
	li $t1,2
	bgt $a0,$t1,L4
	li $t1,1
	move $v0,$t1
	jr $ra
	j L2
L4:
	li $t1,1
	sub $t2,$a0,$t1
	move $t0,$a0
	move $a0,$t2
	addi $sp,$sp,-24
	sw $t0,0($sp)
	sw $ra,4($sp)
	sw $t1,8($sp)
	sw $t2,12($sp)
	sw $t3,16($sp)
	sw $t4,20($sp)
	jal fibonacci
	lw $a0,0($sp)
	lw $ra,4($sp)
	lw $t1,8($sp)
	lw $t2,12($sp)
	lw $t3,16($sp)
	lw $t4,20($sp)
	addi $sp,$sp,24
	move $t1 $v0
	move $t2,$t1
	li $t1,2
	sub $t3,$a0,$t1
	move $t0,$a0
	move $a0,$t3
	addi $sp,$sp,-24
	sw $t0,0($sp)
	sw $ra,4($sp)
	sw $t1,8($sp)
	sw $t2,12($sp)
	sw $t3,16($sp)
	sw $t4,20($sp)
	jal fibonacci
	lw $a0,0($sp)
	lw $ra,4($sp)
	lw $t1,8($sp)
	lw $t2,12($sp)
	lw $t3,16($sp)
	lw $t4,20($sp)
	addi $sp,$sp,24
	move $t1 $v0
	move $t3,$t1
	add $t1,$t2,$t3
	move $v0,$t1
	jr $ra
L2:
main:
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal read
	lw $ra,0($sp)
	move $t4,$v0
	addi $sp,$sp,4
	move $t5,$t4
	li $t4,0
	move $t6,$t4
L13:
	bge $t6,$t5,L14
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal read
	lw $ra,0($sp)
	move $t4,$v0
	addi $sp,$sp,4
	move $t7,$t4
	move $t0,$a0
	move $a0,$t7
	addi $sp,$sp,-24
	sw $t0,0($sp)
	sw $ra,4($sp)
	sw $t1,8($sp)
	sw $t2,12($sp)
	sw $t3,16($sp)
	sw $t4,20($sp)
	jal fibonacci
	lw $a0,0($sp)
	lw $ra,4($sp)
	lw $t1,8($sp)
	lw $t2,12($sp)
	lw $t3,16($sp)
	lw $t4,20($sp)
	addi $sp,$sp,24
	move $t4 $v0
	move $t8,$t4
	move $t0,$a0
	move $a0,$t8
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
	li $t4,1
	add $t6,$t6,$t4
	j L13
L14:
	li $t4,0
	move $v0,$t4
	jr $ra

```

结果如下：

![](https://raw.githubusercontent.com/iABF/Compilation-Test/master/pics/1_1.png)

![](https://raw.githubusercontent.com/iABF/Compilation-Test/master/pics/1_2.png)

### 2. 控制流程（见目录result2）

C语言代码 `Test.txt`：

```c
int ifwhilefortest(int b) {
    int a = 1;
    a = b + 10 / 2 ^ 3; // pay attention to operation priority
    if (a != 0) {
        while (a < 10 && b < 10) {
            a = a * b;
            b = b + 2;
        }
        for (int i = 0; i < 1; i = i + 1) { // it's OK if you cannot handle the operator "++"
            i = b;
        }
    }
    return a;
}

int main() {
    int result, times;
    times = read();
    int i = 0;
    while (i < times) {
        int m = read();
        result = ifwhilefortest(m);
        print(result);
        i = i + 1;
    }
    return 0;
}
```

中间代码和汇编代码见附件。

结果为：

![](https://raw.githubusercontent.com/iABF/Compilation-Test/master/pics/2_1.png)

![](https://raw.githubusercontent.com/iABF/Compilation-Test/master/pics/2_2.png)
