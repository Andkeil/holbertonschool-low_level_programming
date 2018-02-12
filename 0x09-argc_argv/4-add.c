#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Add two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if symbols are not digits
 */

int main(int argc, char *argv[])
{
	int i, val = 0;

	for (i = 1; i < argc; i++)
	{
		if (isanum(argv[i]) == 1)
			val += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", val);
	return (0);
}

/**
 * isanum - Use digit function to check if a legit number
 * @num: number passed in
 *
 * Return: 1 if number 0 otherwise
 */

int isanum(char *num)
{
	while (*num)
	{
		if (isadigit(*num) == 0)
		{
			return (0);
		}
		num++;
	}
	return (1);
}

/**
 * isadigit - check if a number is made of real digits
 * @digit: digit passed in
 *
 * Return: 1 if digit 0 otherwise
 */
int isadigit(const char digit)
{
	int a = digit;

	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}
