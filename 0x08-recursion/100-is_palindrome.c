#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string using recursion.
 * @s: The input string.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
/**
 * bool_type - Check if a string is a palindrome.
 * @s: The input string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int bool_type(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (bool_type(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: Pointer to a character string
 * Return: is_palindrome
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (bool_type(s, len - 1));
}
