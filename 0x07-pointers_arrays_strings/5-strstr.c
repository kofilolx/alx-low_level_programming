[3~#include "main.h"

/**
* _strstr - Search function
* @haystack: points a char
* @needle: points a char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *output = haystack,
	char *find_needle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (output);
		}
		needle = find_needle;
		output++;
		haystack = output;
	}
	return (0);
}
