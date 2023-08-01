#include "main.h"

/**
 * _strspn - return the length of prefix substring
 * @s: Character string to calculate substring from
 * @accept: accepted substring character to match
 * Return: length of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, verif;
	int i,

	c = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				c++;
				verif = 1;
			}
		}
		if (!verif)
		{
			return (c);
		}
		verif = 0;
		s++;
	}
	return (c);
}
