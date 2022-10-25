#include "lists.h"
#include <stdio.h>
/**
 * listint_len - print the number of elements
 * @h: pointer
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
