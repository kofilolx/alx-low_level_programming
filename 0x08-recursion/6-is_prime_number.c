#include "main.h"
#include <stdio.h>

/**
 * _prime_func -  Prime number check
 * @n: integer parameter
 * @factor: prime factor
 *
 * Return: true
 */

int _prime_func(int n, int factor)
{
	if (n == factor)
		return (1);
	else if (n % factor == 0)
		return (0);
	else
		return (_prime_func(n, factor + 1));
}

/**
* is_prime_number - returns 1 if true, false if 0
*
* @n: integer parameter
*
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);

	return (_prime_func(n, 2));
}
