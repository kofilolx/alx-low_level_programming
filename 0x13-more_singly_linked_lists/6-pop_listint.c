#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n_data;

	tmp = *head;

	if (tmp == NULL)
		return (0);

	*head = tmp->next;
	n_data = tmp->n_data;
	free(tmp);
	return (n_data);
}
