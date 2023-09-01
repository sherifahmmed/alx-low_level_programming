#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *
 *Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *popped;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	popped = (*head)->next;
	free(*head);
	*head = popped;

	return (num);
}
