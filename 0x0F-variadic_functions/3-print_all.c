#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_all - print anything
 *
 * @format: list of args
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	type_form arguments[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_fl},
		{"s", print_s},
		{NULL, NULL}
	};
	int i, j;
	char *strp;
	va_list list;

	va_start(list, format);

	i = 0;
	strp = "";

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (arguments[j].tp)
		{
			if (format[i] == arguments[j].tp[0])
			{
				printf("%s", strp);
				arguments[j].f(list);
				strp = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

/**
 * print_c - prints characters
 *
 * @list: list of args
 *
 * Return: void
 */

void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_i - prints integers
 *
 * @list: list of args
 *
 * Return: void
 */

void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_fl - prints floats
 *
 * @list: list of args
 *
 * Return: void
 */

void print_fl(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_s - prints strings
 *
 * @list: list of args
 *
 * Return: void
 */

void print_s(va_list list)
{
	char *tmp;

	tmp = va_arg(list, char *);
	if (tmp == NULL)
	{
		tmp = "(nil)";
	}
	printf("%s", tmp);
}
