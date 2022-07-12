#include "main.h"

/**
 * check_format - printf the next element in li
 * @c: the format
 * @li: the va_list
 *
 *Return: size of li's element printed
 */
int check_format(const char *c, va_list *li)
{
	char t = '\0';
	char *str = NULL;

	switch (*c)
	{
	case 'c':
		t = va_arg(*li, int);
		return (print_char(t));
	case '%':
		return (print_char('%'));
	case 's':
		str = va_arg(*li, char*);
		return (print_string(str));
	case ' ':
		return (check_format(c + 1, li));
		break;
	case '\0':
		return (-1);
	}

	return (0);
}
