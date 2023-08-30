#include "lists.h"

/**
 * get_nodeint_at_index - finds a given node in a linked list
 * @head : pointer to the head of the linked list
 * @index: index of the node to find (starting at 0)
 * Return: pointer to the desired node,
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t itr;

	for (itr = 0; (itr < index) && (head->next); itr++)
		head = head->next;

	if (itr < index)
		return (NULL);

	return (head);
}
