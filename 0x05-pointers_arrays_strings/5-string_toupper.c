#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - upcase all lowcase
 *
 * @s: string pointer
 *
 * Return: pointer
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = (int)s[i] - 32;
		}
	}
	return (s);
}
