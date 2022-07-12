#include "main.h"

/**
 * convert_b - convert n in binary
 * @n: integer to convert
 * @p: to count size of n in binary
 */
void convert_b(int n, int *p)
{
	if (n < 0)
	{
		_putchar('-');
		n -= n;
		++(*p);
	}
	if (n / 2)
	{	++(*p);
		convert_b(n / 2, p);
	}
	_putchar((n % 2) + '0');
}
/**
 * binary - convert n in baniry
 * @n: integer to convert
 *
 * Return: size of n in binary
 */
int binary(int n)
{
	int count = 1;
	convert_b(n, &count);
	return (count);
}
