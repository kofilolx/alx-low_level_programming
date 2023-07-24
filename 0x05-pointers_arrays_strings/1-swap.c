#include "main.h"

/**
 * swap_int - swap value of two integers a and b
 *
 * @a: first integer.
 * @b: second integer.
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
