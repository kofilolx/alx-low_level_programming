#include <stdlib.h>

/**
 * _calloc - allocate memory to an array using malloc
 * @nmemb: number of items in array
 * @size: size of items i bytes
 * Return: ptr && Null if function params are == 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, delim;

	if (nmemb == 0 || size == 0)
		return (NULL);

	delim = nmemb * size;
	ptr = malloc(delim);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < delim; ++i)
	{
		*((char *)(ptr) + i) = 0;
	}
	return (ptr);
}
