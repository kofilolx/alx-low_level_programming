#include <stdlib.h>

/**
  *array_range - creates an array of integers.
  *@min: min value
  *@max: max value
  *Return: pointer to newly created array.
  */
int *array_range(int min, int max)
{
	int bound, *ptr, i;

	if (min > max)
		return (NULL);

	bound = (max - min + 1);
	ptr = malloc(bound * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
	{
		ptr[i] = min + 1;
	}

	return (ptr);
}
