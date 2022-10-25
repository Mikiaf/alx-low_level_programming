#include "lists.h"
#include <stdio.h>
/**
 *  add_nodeint_end - add new node
 *  @head:pointer
 *  @n:int
 *
 *  Return:head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;

	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
		return (NULL);

	end->next = *head;
	end->next->n = n;

	return (end->next);
}
