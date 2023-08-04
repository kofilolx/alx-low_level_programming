#include "main.h"

/**
 * _memset - memory set
 * @s: pointer to a char argument
 * @b: information to be changed
 * @n: array index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
