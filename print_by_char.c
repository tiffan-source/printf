#include "main.h"

/**
 * print_char - print c
 * @c: chzar to print
 *
 * Return: 1
 */
int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - print str
 * @str: string to print
 *
 * Return: length of string
 */
int print_string(char *str)
{
	int cnt = 0;

	if (str != NULL)
		while (*str)
		{
			write(1, str, 1);
			cnt++;
			str++;
		}
	else
	{
		write(1, "(null)", 6);
		cnt = 6;
	}
	return (cnt);
}
