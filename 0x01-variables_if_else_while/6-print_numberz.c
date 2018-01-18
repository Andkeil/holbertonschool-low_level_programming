#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - putchar 0-9,
 *
 * Return: (0) always
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
		putchar(i);
	putchar(10);
	return (0);
}
