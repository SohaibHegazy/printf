#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_c(va_list, int);
int print_int(va_list, int);
int print_s(va_list, int);

#endif
