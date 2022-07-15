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
int print_integer(long int n);
int print_octal(long int n);
int print_hexa_type(long int n, int type);
int print_binary(long int n);
int print_unsigned_int(long int);

int _putchar(char c);
int binary(long int n);
int check_space(const char *str);
int _printf_r(const char *str, va_list *my_list);
void convert_b(long int n, int *p);
void invert_table(char *);
void add_one(char *);
void fill_table(char *);
int print_table(char *table, int size);
void reverse_table(char *table, int size);
unsigned long int pow_2(int a);
void get_binary(long int n, char *result);


#endif
