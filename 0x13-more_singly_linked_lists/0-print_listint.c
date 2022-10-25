#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all the elements
 * @h:linked list
 *
 * Return:number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	
	if (h == NULL)
		return (-1);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++
	}
	return (i);
}
