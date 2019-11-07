#ifndef SYMTABLE_H
#define SYMTABLE_H

#define MAXSYM 50

struct symtable
{
    char *name;
    double value;
};

struct symtable *symlook(char *s);
#endif
