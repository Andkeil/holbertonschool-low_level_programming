#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - data type
 *
 * @tp: type of char
 * @f: The function associated
 */
typedef struct type
{
	char *tp;
	void (*f)();
} type_form;

void print_c(va_list list);
void print_i(va_list list);
void print_fl(va_list list);
void print_s(va_list list);
#endif
