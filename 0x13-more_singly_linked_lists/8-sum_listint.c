#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a linked list
 * @head : pointer to the head of the list
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum_up;

	sum_up = 0;
	while (head)
	{
		sum_up += head->n;
		head = head->next;
	}
	return (sum_up);
}
