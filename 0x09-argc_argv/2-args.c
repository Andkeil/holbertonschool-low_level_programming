#include <stdio.h>

/**
 * main - Prints arguments 1 per line
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
