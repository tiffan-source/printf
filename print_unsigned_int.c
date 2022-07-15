#include "main.h"

unsigned long int convert_decimal(char *table)
{
	unsigned long int sum = 0;
	int i;

	for (i = 0; i < 32; i++)
		sum += (table[i] - '0') * pow_2(32 - i - 1);

	return (sum);
}

int print_unsigned_int(long int)
{
	char binary_table[32];
	unsigned long int data;
	int count;

	get_binary(n, binary_table);

	data = convert_decimal(binary_table);

	count = print_number(data);

	return (count);
}
