#include <stdio.h>

/**
 * main - Prints number of arguments
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
