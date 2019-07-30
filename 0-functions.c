#include "holberton.h"

/**
 * _putchar -  Writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * op_char - print char
 * @list: string struct
 * Return: 1
 */
int op_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}
/**
 * op_char_ptr - prints string
 * @list: arguments
 * Return: a
 */
int op_char_ptr(va_list list)
{
	int a;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		a = 0;
	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	return (a);
}
