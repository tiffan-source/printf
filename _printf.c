#include "main.h"

/**
 * _printf - print a format string
 * @format: string format to print
 *
 * Return: number of char print (count)
 */

int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list my_list;

	if (format == NULL)
		return (-1);

	va_start(my_list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			count += check_format(format[i + 1], &my_list);
			i++;
		}
		else
		{
			write(1, format + i, 1);
			count++;
		}
	}

	va_end(my_list);

	return (count);
}
