#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: character string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int itr = 0;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (; b[itr]; itr++)
	{
		if (b[itr] < '0' || b[itr] > '1')
			return (0);
		decimal = 2 * decimal + (b[itr] - '0');
	}
	return (decimal);
}
