#include <stdio.h>

/**
 * main - Entry point
 *
 * purpose - print lowercase alphabet with putchar
 *
 * Return: (0) always
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	return (0);
}
