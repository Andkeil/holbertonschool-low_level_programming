#include "holberton.h"
#include <stdio.h>

/**
 * get_endianness - check if the system is big endian or little endian
 *
 * Return: void
 */

int get_endianness(void)
{
	int i = 1;

	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
