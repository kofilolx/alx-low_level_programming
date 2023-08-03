#include "main.h"

/**
 * _sqrt_recursion - indirect function
 * @n: int data type parameter
 * Return: _sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: int data type parameter
 * @i: int data type parameter
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
