#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concate all args of program
 *
 * @ac: argument count
 * @av: array of args
 *
 * Return: array of args
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, slen = 0;
	char *argstr;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			slen++;
		slen++;
	}
	slen++;
	argstr = malloc(sizeof(char) * slen);
	if (argstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			argstr[k] = av[i][j];
		}
		argstr[k] = '\n';
		k++;
	}
	argstr[k] = '\0';
	return (argstr);
}
