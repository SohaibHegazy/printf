#include "main.h"

/**
 *
 * _printf - like printf
 *
 * @format: input string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, n = 0, count = 0;
	int (*string)(char *);

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++, n++)
	{
		if (format[i] != '%')
			write(1, &format[i], sizeof(char));
		else
		{
			i++;
			count = 0;
			string = get_func(&format[i]);
			count = string(va_arg(args, char *), args);
			n = n + count - 1;
		}
	}
	return (n);
	va_end(args);
}

