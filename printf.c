#include "main.h"

/**
 * print_s - function to print s
 *
 * @args: list of arguments
 * @n: count of printed characters
 *
 * Return: n
 */

int print_s(va_list args, int n)
{
	char *string = va_arg(args, char *);
	int len;

	for (len = 0; string[len] != '\0'; len++)
		;
	write(1, &string, len);
	n += len;
	return (n);
}




/**
 * print_int - like printf
 *
 * @args: list of arguments
 * @n: number of characters printed
 *
 * Return: n
 */

int print_int(va_list args, int n)
{
	char num[50];
	int d = va_arg(args, int);
	int len;

	sprintf(num, "%d", d);

	for (len = 0; num[len] != '\0'; len++)
		;
	write(1, &num, len);

	n += len;
	return (n);
}


/**
 * print_c - like printf
 *
 * @args: list of arguments
 * @n: number of characters printed
 *
 * Return: n
 */

int print_c(va_list args, int n)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	n++;
	return (n);
}


/**
 * _printf - like printf
 *
 * @format: input string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, n = 0;

	va_list args;

	if ((!format))
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], sizeof(char));
			n++;
		}
		else
		{
			i++;
			if (format[i] == 'c')
				print_c(args, n);

			if (format[i] == 's')
				print_s(args, n);

			if (format[i] == '%')
			{
				write(1, &format[i], 1);
				n++;
			}
			if (format[i] == 'd' || format[i] == 'i')
				print_int(args, n);

			if (format[i] == '\0')
				break;
		}
	}
	return (n);
	va_end(args);
}

