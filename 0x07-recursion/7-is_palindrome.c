#include "holberton.h"

/**
 * is_palindrome - checks the palindrome of the string
 *
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (itpal(s, length));
}

/**
 * _strlen_recursion - return length of string
 *
 * @s: char array string
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * _strlen_recursion - return length of string
 *
 * @s: char array string
 *
 * Return: void
 */

int itpal(char *s, int slen)
{
	if (*s != s[slen - 1])
		return (0);
	if (slen == 1 || slen == 0)
		return (1);
	else
		return (itpal(s + 1, slen - 2));
}
