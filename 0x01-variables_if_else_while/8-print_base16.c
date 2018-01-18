#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - putchar base 16 in order
 *
 * Return: (0) always
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
		putchar(i);
	for (i = 97 ; i < 103 ; i++)
		putchar(i);
	putchar(10);
	return (0);
}
