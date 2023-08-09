#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  function that returns a pointer to a newly allocated space
 * @str: input string.
 *
 * Return: prt pointer of an array of character string
 */
char *_strdup(char *str)
{
	char *strprt;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strprt = (char *)malloc(sizeof(char) * (i + 1));

	if (strprt == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strprt[j] = str[j];

	return (strprt);
}
