#include "main.h"

/**
 * _printf - print a format string
 * @format: string format to print
 *
 * Return: number of char print (count)
 */

int _printf(const char *format, ...)
{
	int i, count = 0, r_check, j;

	va_list my_list;

	if (format == NULL)
		return (-1);

	va_start(my_list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = i + 1; format[j] != '\0'; j++)
			{
				if (format[j] != ' ')
				{
					i = j;
					break;
				}
				else if (format[j] == ' ' && format[j + 1] == '\0')
					return (-1);
			}

			r_check = check_format(format + i, &my_list);

			count += r_check;

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
