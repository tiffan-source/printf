#include "main.h"

/**
 *print - Entry to code
 * @n : integer to print
 * @p: save size of n
 *
 */

void print(int n, int *p)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		++(*p);
	}
	if (num > 9)
	{
		++(*p);
		print(num / 10, p);
	}
	_putchar((num % 10) + '0');
}

/**
 *print_number - Entry to code
 *
 * @n : integer to print
 *
 * Return: Always all number (Success)
 */

int print_integer(int n)
{
	int count = 1;

	print(n, &count);
	return (count);
}
