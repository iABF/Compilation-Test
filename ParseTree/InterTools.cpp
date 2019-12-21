#include "InterTools.h"

void emitLabel(int i)
{
	FILE *file = fopen("out_intermediate_code.txt", "a");
	fprintf(file, "L%d:", i);
	fclose(file);
}

void emit(std::string s)
{
	FILE *file = fopen("out_intermediate_code.txt", "a");
	fprintf(file, "\t\t%s\n", s.c_str());
	fclose(file);
}

std::string int2str(int a)
{
	return std::to_string(a);
}

int newlabel()
{
	extern int labelCount;
	return ++labelCount;
}
