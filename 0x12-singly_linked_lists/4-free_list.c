#include "lists.h"

/**
 * free_list -free list
 * @head: head of the linked list
 *
 * Return:null
 */
void free_list(list_t *head)
{
	list *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
