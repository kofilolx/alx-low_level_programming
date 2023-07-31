#include "main.h"

/**
 * _memcpy - memory copy
 * @dest: destination pointer char argument
 * @src: source pointer char argument
 * @n: number of char
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
