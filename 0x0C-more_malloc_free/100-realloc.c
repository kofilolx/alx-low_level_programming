#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: memory block to reallocate
 * @old_size: size of memory block of ptr in bytes
 * @new_size: size of memory block of new memory block in bytes
 * Return: pointer to new memory block or NULL if failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (new_ptr);
		for (i = 0; i < old_size; i++)
			new_ptr[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (new_ptr);
}
