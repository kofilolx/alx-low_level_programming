#include <stdlib.h>

/**
  * malloc_checked - Memory allocation.
  * @b: memory bytes to allocate
  * Return: points to allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
