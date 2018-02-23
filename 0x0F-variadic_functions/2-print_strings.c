#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print strings with a separator string
 *
 * @separator: String to print between strings
 * @n: number of parameters
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *tmp;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(list, char *);
		if (tmp == NULL)
			printf("(nil)");
		printf("%s", tmp);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
