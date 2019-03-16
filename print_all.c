#include "variadic_functions.h"
#include <stdarg.h>
/**
 * _charp - print character
 * @list: argument character.
 */
void _charp(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * _intp - print and int.
 * @list: argument integer.
 */
void _intp(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * _floatp - print a float.
 * @list: argument float.
 */
void _floatp(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * _stringp - print a string
 * @list: argument string.
 */
void _stringp(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - function that prints anything.
 * @format: list of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	data_t types[] = {
		{"c", _charp},
		{"i", _intp},
		{"f", _floatp},
		{"s", _stringp},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;
	va_list list;

	char *sepa = "";

	va_start(list, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (types[j].type)
		{
			if (format[i] == *types[j].type)
			{
				printf("%s", sepa);
				types[j].func(list);
				sepa = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
