#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_char - calls function
 * @list: string struct
 *
 * Return: 0
 */
void op_char(va_list list)
{
	char c = va_arg(list,  int);
	_putchar(c);
}
/**
 * op_int - calls function
 * @list: string struct
 *
 * Return: 0
 */
void op_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * op_float - calls function
 * @list: string struct
 *
 * Return: 0
 */
void op_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * op_char_ptr - calls function
 * @list: string struct
 *
 * Return: 0
 */
void op_char_ptr(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
