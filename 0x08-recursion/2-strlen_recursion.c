#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: points character string params
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
