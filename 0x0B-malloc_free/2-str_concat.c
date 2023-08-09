#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: character string input
 * @s2: character string input
 * Return: strprt pointer of an array os characters
 */

char *str_concat(char *s1, char *s2)
{
	char *strprt;
	unsigned int i, j;
	unsigned int cmp, len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; ++j)
		;

	strprt = malloc(sizeof(char) * (i + j + 1));

	if (strprt == NULL)
	{
		free(strprt);
		return (NULL);
	}

	for (cmp = 0; cmp < i; cmp++)
	{
		strprt[cmp] = s1[cmp];
	}

	len = j;
	for (j = 0; j <= len; cmp++, j++)
		strprt[cmp] = s2[j];

	return (strprt);
}
