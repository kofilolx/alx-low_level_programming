#include "main.h"

/**
* _strstr - Search function
* @haystack: points a char
* @needle: points a char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i] && haystack[i] && needle[i] == haystack[i]; i++)
			;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
