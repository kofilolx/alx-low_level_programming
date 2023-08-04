#include "main.h"

/**
 * _isalpha - Checks if a character is a lowercase letter
 *
 * Description: This function checks whether the given character 'c'
 * is a lowercase or uppercaes letter.
 *
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
