#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - encode to rot13
 *
 * @s: string pointer
 *
 * Return: pointer
 */

char *rot13(char *s)
{
	int i, j;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
