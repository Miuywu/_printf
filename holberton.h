#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void _puts(char *str);
int _putchar(char);
void _printf(const char * const format, ...);

int op_char(va_list list);
int op_int(va_list list);
int op_float(va_list list);
int op_char_ptr(va_list list);
/**
 *struct ops - struct of functions and flags
 *@c: pointers to char string
 *@ch: pointer to list
 *
 */

typedef struct ops
{
	char *c;
	int (*ch)(va_list);
} op_t;

#endif
