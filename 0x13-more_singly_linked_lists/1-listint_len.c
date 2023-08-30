#include "lists.h"

/**
 * listint_len - computes the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: number of element in linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t read = 0;

	while (ptr != NULL)
	{
		read += 1;
		ptr = ptr->next;
	}
	return (read);
}
