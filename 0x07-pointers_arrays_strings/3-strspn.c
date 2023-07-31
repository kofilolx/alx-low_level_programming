#include "main.h"

/**
 * _strspn - return the length of prefix substring
 * @s: Character string to comb
 * @accept: accepted substring character
 * Return: number of repetition
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	char *t = accept;

	c = 0;
	while (*s++)
	{
		while (*accept)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
