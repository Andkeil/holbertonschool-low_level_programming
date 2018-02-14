#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return pointer to new space with string
 *
 * @str: string
 *
 * Return: char array
 */

char *_strdup(char *str)
{
	int i = 0, slen = 0;
	char *dupstr;

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		slen++;
		i++;
	}
	i = 0;

	dupstr = malloc((slen + 1) * sizeof(char));
	if (dupstr == NULL)
		return (NULL);
	while (i < slen + 1)
	{
		*(dupstr + i) = *(str + i);
		i++;
	}
	*(dupstr + i) = '\0';
	return (dupstr);
}
