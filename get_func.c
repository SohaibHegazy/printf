#include "main.h"

/**
 * get_param - function to get the parameter
 *
 * @s: the specifier
 *
 * Return: void
 */



/**
 * get_func - function to select the operation
 *
 * @s: the specifier
 *
 * Return: function
 *
 */

int (*get_func(const char *s))(char *, va_list)
{
	spec sp[] = {
		{"c", func_c},
		{"s", func_s},
		{"%", func_perc},
		{NULL, NULL}
	};
	int i = 0;

	while (sp[i].c)
	{
		if (*s == sp[i].c[0])
			return (sp[i].f);
		i++;
	}
	return (NULL);
}
