#include "main.h"

/**
 * print_table - print a table
 * @table: tableto print
 *
 * Return: number of bit print
 */

int print_table(char *table, int size)
{
	int i, count = 0;

	for (i = 0; i < size; i++)
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
 * pow_2 - get pow of 2 under 2
 * @a: power
 *
 * Return: 1 or 2 or 4
 */

int pow_2(int a)
{
	if (a == 0)
		return (1);
	else if (a == 1)
		return (2);
	else
		return (4);
}

/**
 * reverse_table - reverse an array
 * @table: array to reverse
 * @size: array size
 *
 */

void reverse_table(char *table, int size)
{
	int i;
	char save;

	for (i = 0; i < size / 2; i++)
	{
		save = table[i];
		table[i] = table[size - i - 1];
		table[size - i - 1] = save;
	}
}

/**
 * get_binary - convert n in baniry
 * @n: integer to convert
 *
 * Return: binary table
 */
void get_binary(long int n, char *result)
{
	int index = 31;
	int is_negative = 0;

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
