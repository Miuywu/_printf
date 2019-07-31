#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - calls function
 * @format: list of types of arguments passed to the function
 * Description: Function that prints anything
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i, j;
	int counter = 0;
	va_list list;
	int (*getFnptr(const char *))(va_list);

	va_start(list, format);
	i = 0;

	if (format == NULL)
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			getFnptr = (*getFn(format))(list);
			if (getFnptr == NULL)
			{
				counter += _putchar(format[i]);
				if (format[i + 1] != '%')
					counter += _putchar(format[i + 1]);
			}
			i += 2;
		}
		else
		{
			counter += _putchar(format[i]);
			i++;
		}
	}
	va_end(list);
	return (counter);
}
