#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  return sumed up values
 * @a: integer pointer to fisrt 2D array
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i,
	int f_sum = 0, l_sum = 0;

	for (i = 0; i < size; i++)
	{
		f_sum += *(a + (size * i + i));
		l_sum += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", f_sum);
	printf("%d\n", l_sum);
}
