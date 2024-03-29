import os
import re

path = 'D:\\Program\\C++\\Compilation Test\\Compilation Test\\optimized_code.txt'
path2 = 'D:\\Program\\C++\\Compilation Test\\Compilation Test\\asm_code.txt'

regs = ['t1', 't2', 't3', 't4', 't5', 't6', 't7', 't8', 't9', 's0', 's1', 's2', 's3', 's4', 's5', 's6', 's7']
table = {}
reg_ok = {}
variables = []


def get_register(string):
    try:
        variables.remove(string)
    except:
        pass
    if string in table:
        return '$' + table[string]
    else:
        keys = []
        for key in table:
            keys.append(key)
        for key in keys:
            if 'temp' in key and key not in variables:
                reg_ok[table[key]] = 1
                del table[key]
        for reg in regs:
            if reg_ok[reg] == 1:
                table[string] = reg
                reg_ok[reg] = 0
                return '$' + reg


def translate(line):
    if line[0].startswith('L'):
        return line[0]
    if line[1] == '=':
        if len(line) == 3:
            if line[-1].isdigit():
                return '\tli %s,%s' % (get_register(line[0]), line[-1])
            else:
                return '\tmove %s,%s' % (get_register(line[0]), get_register(line[2]))
        if len(line) == 5:
            if line[3] == '+':
                if line[-1].isdigit():
                    return '\taddi %s,%s,%s' % (get_register(line[0]), get_register(line[2]), line[-1])
                else:
                    return '\tadd %s,%s,%s' % (get_register(line[0]), get_register(line[2]), get_register(line[-1]))
            elif line[3] == '-':
                if line[-1].isdigit():
                    return '\taddi %s,%s,-%s' % (get_register(line[0]), get_register(line[2]), line[-1])
                else:
                    return '\tsub %s,%s,%s' % (get_register(line[0]), get_register(line[2]), get_register(line[-1]))
            elif line[3] == '*':
                return '\tmul %s,%s,%s' % (get_register(line[0]), get_register(line[2]), get_register(line[-1]))
            elif line[3] == '/':
                return '\tdiv %s,%s\n\tmflo %s' % (get_register(line[2]), get_register(line[-1]), get_register(line[0]))
            elif line[3] == '<':
                return '\tslt %s,%s,%s' % (get_register(line[0]), get_register(line[2]), get_register(line[-1]))
            elif line[3] == '>':
                return '\tslt %s,%s,%s' % (get_register(line[0]), get_register(line[-1]), get_register(line[2]))
        if line[2] == 'CALL':
            if line[3] == 'read' or line[3] == 'print':
                return '\taddi $sp,$sp,-4\n\tsw $ra,0($sp)\n\tjal %s\n\tlw' \
                       ' $ra,0($sp)\n\tmove %s,$v0\n\taddi $sp,$sp,4' \
                       % (line[-1], get_register(line[0]))
            else:
                return '\taddi $sp,$sp,-24\n\tsw $t0,0($sp)\n\tsw $ra,4($sp)\n\tsw ' \
                       '$t1,8($sp)\n\tsw $t2,12($sp)\n\tsw ' \
                       '$t3,16($sp)\n\tsw $t4,20($sp)\n\tjal %s\n\tlw $a0,0($sp)\n\tlw $ra,4($sp)\n\tlw $t1,' \
                       '8($sp)\n\tlw $t2,12($sp)\n\tlw $t3,16($sp)\n\tlw $t4,20($sp)\n\taddi $sp,$sp,24\n\tmove %s ' \
                       '$v0' % (line[-1], get_register(line[0]))
    if line[0] == 'goto':
        return '\tj %s' % line[1]
    if line[0] == 'RETURN':
        return '\tmove $v0,%s\n\tjr $ra' % get_register(line[1])
    if line[0] == 'if':
        if line[2] == '==':
            return '\tbeq %s,%s,%s' % (get_register(line[1]), get_register(line[3]), line[-1])
        if line[2] == '!=':
            return '\tbne %s,%s,%s' % (get_register(line[1]), get_register(line[3]), line[-1])
        if line[2] == '>':
            return '\tbgt %s,%s,%s' % (get_register(line[1]), get_register(line[3]), line[-1])
        if line[2] == '<':
            return '\tblt %s,%s,%s' % (get_register(line[1]), get_register(line[3]), line[-1])
        if line[2] == '>=':
            return '\tbge %s,%s,%s' % (get_register(line[1]), get_register(line[3]), line[-1])
        if line[2] == '<=':
            return '\tble %s,%s,%s' % (get_register(line[1]), get_register(line[3]), line[-1])
    if line[0] == 'function':
        return '%s' % line[1]
    if line[0] == 'CALL':
        if line[-1] == 'read' or line[-1] == 'print':
            return '\taddi $sp,$sp,-4\n\tsw $ra,0($sp)\n\tjal %s\n\tlw $ra,0($sp)\n\taddi $sp,$sp,4' % (line[-1])
        else:
            return '\taddi $sp,$sp,-24\n\tsw $t0,0($sp)\n\tsw $ra,4($sp)\n\tsw $t1,8($sp)\n\tsw $t2,12($sp)\n\tsw ' \
                   '$t3,16($sp)\n\tsw $t4,20($sp)\n\tjal %s\n\tlw $a0,0($sp)\n\tlw $ra,4($sp)\n\tlw $t1,8($sp)\n\tlw ' \
                   '$t2,12($sp)\n\tlw $t3,16($sp)\n\tlw $t4,20($sp)\n\taddi $sp,$sp,24\n\tmove %s $v0' % (
                       line[-1], get_register(line[0]))
    if line[0] == 'arg':
        return '\tmove $t0,$a0\n\tmove $a0,%s' % get_register(line[-1])
    if line[0] == 'PARAM':
        table[line[-1]] = 'a0'
    return ''


def write_to_txt(Obj):
    f = open(path2, 'w')
    template = '''.data
_prompt: .asciiz "Enter an integer:"
_ret: .asciiz "\\n"
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
'''
    f.write(template)
    for line in Obj:
        f.write(line + '\n')
    f.close()


def generator():
    for reg in regs:
        reg_ok[reg] = 1
    file = open(path)
    lines = file.read().split('\n')
    file.close()
    sep_lines = []
    while '' in lines:
        lines.remove('')
    for line in lines:
        sep = line.split(' ')
        sep_lines.append(sep)
    global variables
    pattern = re.compile(r'temp\d+')
    for line in sep_lines:
        temps = pattern.findall(' '.join(line))
        variables += temps
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
    Obj = []
    for line in sep_lines:
        obj_line = translate(line)
        if obj_line == '':
            continue
        Obj.append(obj_line)
    print(Obj)
    write_to_txt(Obj)


generator()
