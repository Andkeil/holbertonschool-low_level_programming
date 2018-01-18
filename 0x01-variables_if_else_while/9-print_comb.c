#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - putchar 0-9 with comma
 *
 * Return: (0) always
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
