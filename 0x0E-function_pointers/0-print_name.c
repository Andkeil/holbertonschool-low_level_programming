#include <stdlib.h>

/**
 * print_name - print name using passed in function
 * @name: name
 * @f: function passed in
 *
 * Return:void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
