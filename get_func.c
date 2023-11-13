#include "main.h"

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

	while (i < 3)
	{
		if (s && sp[i].c[0] == s[0])
			return (sp[i].f);
		i++;
	}
	return (NULL);
}
