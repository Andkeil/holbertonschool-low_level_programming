#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - concat two strings, limit of n bytes for second string
 *
 * @s1: string
 * @s2: string
 * @n: bytes limit for s2
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, slen1, slen2;
	char *constr, *blank = "";

	if (s1)
		slen1 = _strlen(s1);
	else
	{
		slen1 = 0;
		s1 = blank;
	}
	if (s2)
		slen2 = _strlen(s2);
	else
	{
		slen2 = 0;
		s2 = blank;
	}

	constr = malloc((sizeof(char) * slen1) + 1 + n);
	if (constr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		constr[i] = s1[i];
	if (slen2 < n)
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
			constr[i] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++, i++)
			constr[i] = s2[j];
	}

	constr[i] = '\0';
	return (constr);
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
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
