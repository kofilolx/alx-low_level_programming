#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - string copy prototype
 * @s: string character input
 * Return: pointer
 */
char *_strcpy(char *s);


/**
 * new_dog - creates a new profile for dog struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: pt pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pt;

	pt = malloc(sizeof(*pt));
	if (pt == NULL)
		return (NULL);
	pt->name = _strcpy(name);
	if (pt->name == NULL)
	{
		free(pt);
		return (NULL);
	}
	pt->age = age;
	pt->owner = _strcpy(owner);
	if (pt->owner == NULL)
	{
		free(pt->name);
		free(pt);
		return (NULL);
	}
	return (pt);
}

/**
 * _strcpy - string copy
 * @s: string to copy
 * Return: pointer to string copy
 */
char *_strcpy(char *s)
{
	int i;
	char *ptr;

	for (i = 0; s[i]; i++)
		;
	ptr = malloc(i + 1);
	if (ptr)
	{
		for (; i >= 0; i--)
			ptr[i] = s[i];
	}
	return (ptr);
}
