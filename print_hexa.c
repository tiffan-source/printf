#include "main.h"

char get_char_hexa(int c, int type)
{
	if (c >= 0 && c<=9)
		return (c + '0');
	else if (type == 0)
		return ('a' + (c - 10));
	else
		return ('A' + (c - 10));
}

char *get_hexa_table(char *table, char *result, int type)
{
	int i, j, data = 0;

	reverse_table(table, 32);

	for (i = 0; i < 8; i++)
	{
		data = 0;

		for (j = 0; j < 4; j++)
		{
			data += ((table[4 * i + j] - '0') * pow_2(j));
		}

		result[i] = get_char_hexa(data, type);
	}

	reverse_table(result, 8);

	return (result);
}

int print_hexa_type(long int number, int type)
{
	char binary_table[32], hexa_table[8];
	int count;

	get_binary(number, binary_table);

	get_hexa_table(binary_table, hexa_table, type);

	count = print_table(hexa_table, 8);

	if (!count)
	{
		count = 1;
		write(1, hexa_table, 1);
	}

	return (count);
}
