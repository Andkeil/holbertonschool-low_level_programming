#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concat two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: char array
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, slen1, slen2;
	char *str;

	if (s1 != NULL)
		slen1 = _strlen(s1);
	else
		slen1 = 0;
	if (s2 != NULL)
		slen2 = _strlen(s2);
	else
		slen2 = 0;
	str = malloc(((sizeof(char) * slen1) + (sizeof(char) * slen2)) + 1);
	if (str == NULL)
		return (NULL);
	if (slen1 != 0)
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
	}
	if (slen2 != 0)
	{
		for (j = 0; s2[j] != '\0'; i++, j++)
			str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}

/**
 * _strlen - get string length
 *
 * @s: string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0, slen = 0;

	while (*(s + i) != '\0')
	{
		slen++;
		i++;
	}
	return (i);
}
