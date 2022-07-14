#include "main.h"

/**
 * add_one - add one bit to the table
 * @table: table to transform
 *
 */

void add_one(char *table)
{
	int i;

	for (i = 31; i >= 0; i--)
		if (table[i] == '1')
			table[i] = '0';
		else
		{
			table[i] = '1';
			break;
		}
}

/**
 * invert_table - transform table to opposate
 * @table: table to transform
 *
 */

void invert_table(char *table)
{
	int i;

	for (i = 0; i < 32; i++)
		if (table[i] == '0')
			table[i] = '1';
		else
			table[i] = '0';
}

/**
 * fill_table - init teble with bit 0
 * @table: table to init
 *
 */

void fill_table(char *table)
{
	int i;

	for (i = 0; i < 32; i++)
		table[i] = '0';
}

/**
 * print_table - print a table
 * @table: tableto print
 *
 * Return: number of bit print
 */

int print_table(char *table)
{
	int i, count = 0;

	for (i = 0; i < 32; i++)
	{
		if (table[i] != '0' || count)
		{
			write(1, table + i, 1);
			count++;
		}
	}
	return (count);
}

/**
 * print_binary - convert n in baniry
 * @n: integer to convert
 *
 * Return: size of n in binary
 */
int print_binary(long int n)
{
	int index = 31;
	char result[32];
	int is_negative = 0;
	int lgt;

	if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}

	fill_table(result);

	do {
		result[index] = (n % 2) + '0';
		n /= 2;
		index--;
	} while (n != 0 && index >= 0);

	if (is_negative)
	{
		invert_table(result);
		add_one(result);
	}
	lgt = print_table(result);

	if (!lgt)
	{
		lgt = 1;
		write(1, result, 1);
	}

	return (lgt);
}
