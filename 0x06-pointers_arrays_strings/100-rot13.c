#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string input
 * Return: string
 */
char *rot13(char *)
{
	int i, j;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; i++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
	}
	return (s);
}
