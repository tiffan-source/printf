#include "main.h"
/**
 * print_x_or_X - print by x ou X
 * @n: number to print
 * @count: size of n
 * @c: x or X
 *
 */
void print_x_or_X(long int *n, int *count, char c, int *tab)
{
	long int rest;

	if (c == 'x')
	{
		while (*n / 16)
		{
			rest = *n % 16;
			if (rest < 10)
				tab[*count - 1] = (rest + '0');
			else
				tab[*count - 1] = ((rest % 10) + 'a');
			++(*count);
			*n = *n / 16;
		}
	}
	else if (c == 'X')
	{
		while (*n / 16)
		{
			rest = *n % 16;
			if (rest < 10)
				tab[*count - 1] = (rest + '0');
			else
				tab[*count - 1] = ((rest % 10) + 'A');
			++(*count);
			*n = *n / 16;
		}

	}
}

/**
 * print_hexa - print n in hexa
 * @n: number to print in octal
 * @c: x or X
 *
 * Return: the size on n in hexa
 */
int print_hexa(long int n, int c)
{
	int count = 1, i;
	int tab[32];

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	print_x_or_X(&n, &count, c, tab);
	if (n < 10)
		tab[count - 1] = ((n % 16) + '0');
	else
	{
		if (c == 'x')
		tab[count - 1] = ((n % 10) + 'a');
		else
		tab[count - 1] = ((n % 16) + 'A');
	}
	for (i = count - 1; i >= 0; i--)
		_putchar(tab[i]);
	return (count);
}
