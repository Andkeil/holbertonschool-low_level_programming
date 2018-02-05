#include "holberton.h"

/**
 * _strspn - get length of prefix substring
 *
 * @s: string
 * @accept: bytes to find
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (length);
}
