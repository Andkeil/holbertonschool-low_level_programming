#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - putchar alphabet, no 'q' or 'e'
 *
 * Return: (0) always
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	putchar(10);
		return (0);
}
