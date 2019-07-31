#include "holberton.h"

int op_int(va_list list)
{
	int count;

	count = op_number(va_arg(list, int));
	return (count);
}

/**
 * op_number - print int
 * @n: int passed from va_list
 * Return: 0
 */
int op_number(int n)
{
	unsigned int m;

	int count = digit_length(n);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;

	if (m / 10 != 0)
		op_number(m / 10);
	_putchar(m % 10 + '0');
	return (count);
}
/**
 * digit_length - get length of number
 * @n: number passed to function
 * Return: digit total
 */
int digit_length(int n)
{
	int digitTotal = 0;

	while (n != 0)
	{
		digitTotal++;
		n /= 10;
	}
	return (digitTotal);
}
