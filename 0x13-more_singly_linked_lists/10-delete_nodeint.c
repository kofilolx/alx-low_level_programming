#include "lists.h"
/**
 * delete_nodeint_at_index - deletes positional data
 * @head : pointer to the head of the list
 * @index: index of the data to be deleted
 * Return: 1 Success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *copy = *head;
	unsigned int data;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (data = 0; data < (index - 1); data++)
	{
		if (copy->next == NULL)
			return (-1);
			copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
