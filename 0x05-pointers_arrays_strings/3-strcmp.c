#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - function to copy strings
 *
 * @s1: string pointer
 * @s2: string pointer
 *
 * Return: pointer
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s2[i] != '\0' || s1[i] != '\0'; i++)
		if (s2[i] != s1[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			diff = 0;
	return (diff);
}

/**
 * _strlen - Return length of a string
 *
 * @s: pointer to string
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while  (s[i] != '\0')
		i++;
	return (i);
}
