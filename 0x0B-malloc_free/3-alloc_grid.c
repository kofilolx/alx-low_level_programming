#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{int **output, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	output = malloc(height * sizeof(int *));
	if (output == NULL)
	{
		free(output);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(width * sizeof(int));
		if (output[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(output[i]);
			free(output);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			output[i][j] = 0;

	return (output);
}
