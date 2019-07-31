#include "holberton.h"

int op_unsigned(va_list list)
{
	int count;

	count = op_unsignedNum(va_arg(list, int));
	return (count);
}

/**
 * op_number - print int
 * @n: int passed from va_list
 * Return: 0
 */
int op_unsignedNum(unsigned int n)
{
	int count = digit_length(n);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n / 10 != 0)
		op_unsignedNum(n / 10);
	_putchar(n % 10 + '0');
	return (count);
}
/**
 * digit_length - get length of number
 * @n: number passed to function
 * Return: digit total
 */
int udigit_length(int n)
{
	int digitTotal = 0;

	while (n != 0)
	{
		digitTotal++;
		n /= 10;
	}
	return (digitTotal);
}
