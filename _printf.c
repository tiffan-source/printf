#include "main.h"

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
			else
			{
				count += test;
			}
		}
		else
		{
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
