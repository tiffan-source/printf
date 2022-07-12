#include "main.h"
/**
*print_number - Entry to code
*
* @n : integer to print
*
* Return: Always all number (Success)
*/
int print_integer(int n)
{
	if (n < 0)
	{
		print_char('-');
		n = -n;
		return (1 + print_integer(n));
	}
	if (n > 9)
	{
		return (1 + print_integer(n / 10));
	}
	print_char(n % 10 + '0');
	return (1);
}
