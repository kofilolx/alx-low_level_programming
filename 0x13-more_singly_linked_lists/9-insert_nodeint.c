#include "lists.h"

/**
 * insert_dataint_at_index - adds a new data to a linked list
 * @head : pointer to the head of the list
 * @idx  : index
 * @n    : data for the new data to be added
 * Return: pointer to the new data,
 */

listint_t *insert_dataint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int data;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (data = 0; data < (idx - 1); data++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
