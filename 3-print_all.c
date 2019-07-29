#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - calls function
 * @format: list of types of arguments passed to the function
 * Description: Function that prints anything
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	va_list list;

	op_t f_ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_char_ptr},
		{NULL, NULL}
	};

	va_start(list, format);
	i = 0;
	j = 0;
	while (format && format[i])
	{
		while (f_ops[j].c)
		{
			if (*f_ops[j].c == format[i])
			{
				f_ops[j].ch(list);
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
