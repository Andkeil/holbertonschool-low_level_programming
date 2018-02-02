#include "holberton.h"
#include <stdio.h>

/**
 * leet - encode to leetspeek
 *
 * @s: string pointer
 *
 * Return: pointer
 */

char *leet(char *s)
{
	int i, j;
	char speek[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; speek[j] != '\0'; j++)
		{
			if (s[i] == speek[j])
			{
				s[i] = leet[j];
			}
		}
	}
	return (s);
}
