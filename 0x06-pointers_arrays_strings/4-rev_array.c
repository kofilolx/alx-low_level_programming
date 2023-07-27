#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @n: number of elements in an array
 * @a: integer element
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
