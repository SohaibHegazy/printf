#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>


typedef struct specifier
{
        char *c;
        int (*f)(va_list, param);
} spec;

int _printf(const char *format, ...);
int (*get_func(char *s))(va_list, param);
int func_c(char *, va_list);
int func_s(char *, va_list);
int func_perc(char *, va_list);


#endif
