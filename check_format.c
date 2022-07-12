#include "main.h"

/**
 * check_format - printf the next element in li
 * @c: the format
 * @my_list: the va_list
 *
 *Return: size of li's element printed
 */
int check_format(const char *c, va_list *my_list)
{
	switch (*c)
	{
	case '\0':
		return (-1);
	case 'c':
		return (print_char(va_arg(*my_list, int)));
	case 's':
		return (print_string(va_arg(*my_list, char*)));
	case '%':
		return (print_char('%'));
	case 'i':
	case 'd':
		return (print_integer(va_arg(*my_list, int)));
	default:
		return (0);
	}
}

/**
 * check_space - check next option after space
 * @str: current position
 *
 * Return: number of space count
 */

int check_space(const char *str)
{
	while (*str == ' ')
	{
		return (1 + check_space(str + 1));
	}
	return (1);
}
