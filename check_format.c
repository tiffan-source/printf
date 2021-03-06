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
	unsigned char c_copy;

	switch (*c)
	{
	case '\0':
		return (-1);

	case 'c':
		c_copy = (unsigned char)va_arg(*my_list, int);
		return (print_char(c_copy));

	case 's':
	case 'S':
		return (print_string(va_arg(*my_list, char*)));

	case '%':
		return (print_char('%'));

	case 'i':
	case 'd':
		return (print_integer((long int)va_arg(*my_list, long int)));
	case 'u':
		return (print_unsigned_int((long int)va_arg(*my_list, long int)));
	case 'x':
		return (print_hexa_type((long int)va_arg(*my_list, long int), 0));
	case 'X':
		return (print_hexa_type((long int)va_arg(*my_list, long int), 1));
	case 'o':
		return (print_octal((long int)va_arg(*my_list, long int)));
	case 'b':
		return (print_binary((long int)va_arg(*my_list, long int)));
	default:
		print_char('%');
		print_char(*c);
		return (2);
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
