#include <stdio.h>
#include "main.h"


/**
 * _strpbrk - return bytes
 * @s: character string pointer
 * @accept: character string pointer
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
