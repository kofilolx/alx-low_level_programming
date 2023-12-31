#include "main.h"

/**
 * factorial - factorial n
 * @n: int data type
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
