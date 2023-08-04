#include "main.h"

/**
 * _strncpy - a function that copies  two strings.
 * @src: source character string
 * @dest: destination character string
 * @n: number of src character to be copied
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
