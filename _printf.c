#include "main.h"

/**
 * _printf - print a format string
 * @format: string format to print
 *
 * Return: number of char print (count)
 */

int _printf(const char *format, ...)
{
	int i, count = 0, r_check;

	va_list my_list;

	if (format == NULL)
		return (-1);

	va_start(my_list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			r_check = check_format(format[i + 1], &my_list);
			if (r_check != -1)
			{
				count += r_check;
				i++;
			}
			else
			{
				return (-1);
			}
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
