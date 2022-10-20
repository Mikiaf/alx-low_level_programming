#include "lists.h"

/**
 * list_len - return number
 * @h:list
 *
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
