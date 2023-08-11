#include <stdlib.h>

/**
 * _str_len - length of a string
 * @s: character string
 * Return: length of string pointer
 */
unsigned int _str_len(char *s)
{
	unsigned int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * string_nconcat - allocate memory for string concat
 * @s1: string to concatenate w/ s2
 * @s2: string to concatenate to s1
 * @n: number of s2 characters concatenate
 * Return: pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	char *ptr;
	unsigned int len_s1, len_s2, j, neg = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _str_len(s1);
	len_s2 = _str_len(s2);

	if (n < neg)
		return (NULL);
	if (n >= len_s2)
		n = len_s2;

	ptr = malloc(sizeof(*ptr) * len_s1 + n + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; ++i)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; ++j)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';

	return (ptr);
}
