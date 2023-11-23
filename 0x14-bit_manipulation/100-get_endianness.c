#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks the endianness.
 *
 * Return:  Success 1
 */

int get_endianness(void)
{
	int val = 1;
	char *e_bit;

	e_bit = (char *)&val;

	if (*e_bit == 1)
		return (1);

	return (0);
}
