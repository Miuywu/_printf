#include "holberton.h"

/**
 * op_int - prints int
 * @list: arguments
 * Return: numLength
 */
int op_int(va_list list)
{
	int numInput = va_arg(list, int);
	int numLength;

	op_number(numInput);
	numLength = digit_length(numInput);
	return (numLength);
}
/**
 * op_number - print int
 * @n: int passed from va_list
 * Return: 0
 */
int op_number(int n)
{
	unsigned int m;

	if (n >= 0)
	{
		if (n >= 10)
			op_number(n / 10);
	}
	else
	{
		_putchar('-');
		m = -n;
		if (m >= 10)
			op_number(m / 10);
		_putchar(m % 10 + '0');
	}
	return (0);
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
