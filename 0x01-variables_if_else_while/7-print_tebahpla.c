#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - print lowercase alphabet with putchar in reverse
 *
 * Return: (0) always
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	putchar(10);
	return (0);
}
