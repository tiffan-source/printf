#include "main.h"

char *get_octal_table(char *table, char *result)
{
	int i, j, data = 0;

	reverse_table(table, 32);

	for (i = 0; i < 11; i++)
	{
		data = 0;

		for (j = 0; (i != 10 && j < 3) || j < 2; j++)
		{
			data += ((table[3 * i + j] - '0') * pow_2(j));
		}

		result[i] = data + '0';
	}

	reverse_table(result, 11);

	return (result);
}

int print_octal(long int n)
{
	char binary_table[32], octal_table[11];
	int count;

	get_binary(n, binary_table);

	get_octal_table(binary_table, octal_table);

	count = print_table(octal_table, 11);

	if (!count)
	{
		count = 1;
		write(1, octal_table, 1);
	}

	return (count);
}
