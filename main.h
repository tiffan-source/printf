#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _printf_r(const char *str, va_list *my_list);
int _printf(const char *format, ...);
int check_space(const char *str);
int check_format(const char*, va_list *);
int print_char(char);
int print_string(char *);
int print_integer(int n);
int _putchar(char c);
int binary(long int n);
int check_space(const char *str);
int _printf_r(const char *str, va_list *my_list);
void convert_b(long int n, int *p);
void print(int n, int *p);
#endif
