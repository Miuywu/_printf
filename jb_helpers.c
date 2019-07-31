#include "jb_holberton.h"

/**
 * _char - prints char
 * @list: string struct
 *
 * Return: 0
 */
int _char(va_list args)
{
	char c = va_arg(args,  int);
	_putchar(c);
	return (0);
}
/**
 * _int - prints int
 * @list: string struct
 *
 * Return: 0
 */
int _number(va_list args)
{
	_putchar(va_arg(args, int) + '0');
	return (0);
}
/**
 * _string - prints string
 * @list: string struct
 *
 * Return: 0
 */
int _string(va_list args)
{
	int a;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		a = 0;
	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	return (0);
}
/**
 * _percent - ...
 * @args: arguments passed through function
 * Return: 0
 */
int _percent(va_list args)
{
	_putchar('%');
	return (1);
}

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

#include "holberton.h"
/**
 * _abs - calls function
 * @n: Integer to be computed
 * Description: Function that computes the
 * absolute value of an integer.
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
/**
 * print_number - calls function
 * @n: integer passed
 * @m: integer to account for -
 * Description: Function that prints an integer
 * Return: 0
 */
int _number(va_list args)
{
	int count;
	int n;
	unsigned int m;

	if (n >= 0)
	{
		if (n >= 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar('-');
		m = -n;
		if (m >= 10)
			print_number(m / 10);
		_putchar(m % 10 + '0');
	}
}
