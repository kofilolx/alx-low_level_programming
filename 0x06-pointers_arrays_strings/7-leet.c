#include "main.h"
/**
 *leet - encodes a string into 1337.
 *@s: pointer to string.
 *
 *Return: pointer.
 */
char *leet(char *s)
{
	int i, j;
	char alp[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;
	while (s[i] != '\0')

	{
		j = 0;
		while (j < 10)
		{
			if (alp[j] == s[i])
			{
				s[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
