#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string input
 * Return: `s`
 */

char *cap_string(char *s)
{
	char punc[] = ",;.!?(){}\n\t\" ";
	int i, j;
	int active;

	for (i = 0, active = 0; s[i] != '\0'; i++)
	{
		if (s[0] > 96 && s[0] < 123)
			active = 1;
		for (j = 0; punc[j] != '\0'; j++)
		{
			if (punc[j] == s[i])
				active = 1;
		}

		if (active)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] -= 32;
				active = 0;
			}
			else if (s[i] > 64 && s[i] < 91)
				active = 0;
			else if (s[i] > 47 && s[i] < 58)
				active = 0;
		}
	}
	return (s);
}
