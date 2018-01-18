#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - putchar 00-99 with comma
 *
 * Return: (0) always
 */

int main(void)
{
	int i, j;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
		putchar(i);
		putchar(j);
		if (i != 57 || j != 57)
		{
			putchar(44);
			putchar(32);
		}
		}
	}
	putchar(10);
	return (0);
}
