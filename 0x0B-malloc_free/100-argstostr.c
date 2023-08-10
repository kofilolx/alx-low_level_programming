#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: counter.
 * @av: array.
 * Return: points to an array of characters
 */
char *argstostr(int ac, char **av)
{
	char *prtout;
	int c, i, j, inc;

	if (ac == 0)
	{
		return (NULL);
	}
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	prtout = malloc((c + 1) * sizeof(char));

	if (prtout == NULL)
	{
		free(prtout);
		return (NULL);
	}

	for (i = j = inc = 0; inc < c; j++, inc++)
	{
		if (av[i][j] == '\0')
		{
			prtout[inc] = '\n';
			i++;
			inc++;
			j = 0;
		}
		if (inc < c - 1)
			prtout[inc] = av[i][j];
	}
	prtout[inc] = '\0';

	return (prtout);
}
