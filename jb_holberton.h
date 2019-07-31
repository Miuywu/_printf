#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

void _puts(char *str);
int _putchar(char);
int _printf(const char * const format, op_t f_ops[], va_list, ...);

int _char(va_list args);
int _string(va_list args);
int _number(va_list args);
int _percent(va_list args);

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
