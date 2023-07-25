#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 * @src: character string
 * @dest: character string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int n, i;

	while (src[len] != '\0')
	{
		len++
	}

	for (i = 0; i <= len - 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
