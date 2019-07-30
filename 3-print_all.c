#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - calls function
 * @format: list of types of arguments passed to the function
 * Description: Function that prints anything
 * Return: 0
 */
void _printf(const char *format, ...)
{
        int i, j;
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
        while (format && format[i])
        {
                if (format[i] == '%' && format[i + 1] != '\0')
                {
                        while (f_ops[j].c != NULL)
                        {
                                if (*f_ops[j].c == format[i + 1])
                                {
                                        f_ops[j].ch(list);
                                }
                                j++;
                        }
                        j = 0;
                        i+=2;
                }
                else
                {
                        _putchar(format[i]);
                        i++;
                }
        }
        _putchar('\n');
        va_end(list);
}
