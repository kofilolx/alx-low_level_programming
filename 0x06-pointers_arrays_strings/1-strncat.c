#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: source character string
 * @dest: destination character string
 * @n: number of src character to be copied
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int j = 0;

	while (j < n && *src)
	{
		dest[i + j] = *src;
		src++;
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
