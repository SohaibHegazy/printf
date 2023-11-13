#include "main.h"
#include <string.h>
#include <unistd.h>


int func_s(char *s, va_list args)
{
    int len = strlen(s);
    write(1, &s, len);
    return (len);
}

int func_c(char *ch, va_list args)
{
    int len = 0;
    write(1, &ch, len + 1);
    return (len);
}

int func_perc(char *ch, va_list args)
{
    int len = 0;
    write(1, &ch, len + 1);
    return (len);
}
