#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: decimal parameter
 * @index: Position
 * Return: bit value ( 0 or 1 )
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	bit_val = (n >> index);
	if (index > 32)
		return (-1);
	return (bit_val & 1);
}
