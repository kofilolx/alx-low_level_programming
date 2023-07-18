#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter
 *
 * Description: This function checks whether the given character 'c'
 * is a lowercase letter. It returns 1 if the character is lowercase,
 * and 0 otherwise.
 *
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
