#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: character string to be reversed.
 */

void rev_string(char *s)
{
	int len = 0;
	int j, i;
	char x_1, x_2;

	while (s[len] != '\0')
	{
		len++;
	}

	j = len - 1;
	i = 0;

	while (j > i)
	{
		x_1 = s[i];
		x_2 = s[j];
		s[i] = x_2;
		s[j] = X_1;
		j--;
		i++;
	}
}
