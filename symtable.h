#ifndef SYMTABLE_H
#define SYMTABLE_H

#define MAXSYM 50

struct symtable
{
    char *name;
    double value;
    double (*funcptr)();
};

struct symtable *symlook(char *s);
void addfunc(char *name, double (*func)());
#endif
