#include "lists.h"

/**
 * pop_listint - Deletes the head node 
 * @head: A pointer to the address of the
 *
 * Return: If the linked list is empty - 0
 */
int pop_listint(listint_t **head)
{
	listint_t *del;
	int ret;

	if (*head == NULL)
		return (0);

	del = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(del);

	return (ret);
}
