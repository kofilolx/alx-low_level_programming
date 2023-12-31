#include "main.h"

/**
 * _pow_recursion - pow recursion
 * @x: int data type
 * @y: int data type
 * Return: pow
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
