#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int check_format(char, va_list *);
int print_char(char);
int print_string(char *);

#endif
