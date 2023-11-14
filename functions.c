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
