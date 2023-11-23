#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given position or index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: Success 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = (sizeof(n) * 8);
	if (index > size)
		return (-1);

	*n |= 1 << index;

	return (1);
}
