#include "main.h"

/**
 * _strchr - prints found c
 * @s: pointer to a char
 * @c: char to find
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);

	return (0);
}
