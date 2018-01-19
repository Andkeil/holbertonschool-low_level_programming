#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - putchar all combos of two digits in pairs
 *
 * Return: (0) always
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			k = j + 1;
			l = i;
			for (; l < 58 ; l++)
			{
				for (; k < 58; k++)
				{
				putchar(i);
				putchar(j);
				putchar(32);
				putchar(l);
				putchar(k);
				if (i != 57 || j != 56 || k != 57 || l != 57)
				{
					putchar(44);
					putchar(32);
				}
				}
				k = 48;
			}
		}
	}
	putchar(10);
	return (0);
}
