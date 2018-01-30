#include <stdio.h>
/**
 * _strlen - Return length of a string
 *
 * @s: pointer to string
 *
 * Return: void
 */

int _strlen(char *s)
{
	int length, i;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
