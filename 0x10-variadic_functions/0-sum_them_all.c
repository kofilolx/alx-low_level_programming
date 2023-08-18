#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all argument given
 * @n: number of argument
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	/* variable initialization */
	int sum = 0;
	int num;
	va_list args;
	unsigned int i;

	/* condition to check if n is 0 */
	if (n == 0)
		return (0);

	/* initialize va_list */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}

	va_end(args);

	return (sum);
}
