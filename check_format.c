#include "main.h"

/**
 * check_format - printf the next element in li
 * @c: the format
 * @li: the va_list
 *
 *Return: size of li's element printed
 */
int check_format(char c, va_list *li)
{
	char t;
	char *str;

	switch (c)
	{
		case 'c':
			t = va_arg(*li, int);
			return (print_char(t));
		case '%':
			return (print_char('%'));
		case 's':
			str = va_arg(*li, char*);
			return (print_string(str));
	}

	return (0);
}
