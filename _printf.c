#include "main.h"

/**
 * _printf_r - tools to print character by character
 * @str: string to print
 * @my_list: list argument
 *
 * Return: number of character print
 */

int _printf_r(const char *str, va_list *my_list)
{
	int count = 0, next, test;

	while (*str != '\0')
	{
		if (*str == '%')
		{
			next = check_space(str + 1);
			str += next;
			test = check_format(str, my_list);
			if (test == -1)
				return (test);
			count += test;
		}
		else
		{
			if (*str < 32 || *str >= 127)
			{
				_putchar('\\');
				_putchar('x');
				count += (print_hexa(*str, 'X') + 2);
			}
			else
				print_char(*str);
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * _printf - print a format string
 * @format: string format to print
 *
 * Return: number of char print (count)
 */

int _printf(const char *format, ...)
{
	int count = 0;

	va_list my_list;

	if (format == NULL)
		return (-1);

	va_start(my_list, format);

	count = _printf_r(format, &my_list);

	va_end(my_list);

	return (count);
}
