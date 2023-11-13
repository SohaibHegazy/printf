#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <string.h>
#include <stdarg.h>



typedef struct specifier
{
        char *c;
        int (*f)(char *, va_list);
} spec;

int _printf(const char *format, ...);
int (*get_func(const char *s))(char *, va_list);
int func_c(char *, va_list);
int func_s(char *, va_list);
int func_perc(char *, va_list);


#endif
