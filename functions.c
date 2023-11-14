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
