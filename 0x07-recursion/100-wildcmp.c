#include "holberton.h"

/**
 * wildcmp - compare if two strings with wildcards
 *
 * @s1: string
 * @s2: string
 *
 * Return: 1 for identical 0 for other
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
	}
	return (0);
}
