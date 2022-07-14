#include "main.h"
/**
 * print_octal - print n in octal
 * @n: number to print in octal
 *
 * Return: the size on n in octal
 */
int print_octal(long int n)
{
	int count = 1, i;
	int tab[32];

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	while (n / 8)
	{
		tab[count - 1] = (n % 8) + '0';
		++count;
		n = n / 8;
	}

	tab[count - 1] = ((n % 8) + '0');

	for (i = count - 1; i >= 0; i--)
		_putchar(tab[i]);

	return (count);
}
