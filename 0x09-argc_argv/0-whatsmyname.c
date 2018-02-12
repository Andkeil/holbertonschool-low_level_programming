#include <stdio.h>

/**
 * main - Prints name of program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
