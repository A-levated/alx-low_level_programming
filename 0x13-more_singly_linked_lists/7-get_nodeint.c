#include "list.h"

/**
 * get_nodeint_at_indext - returns
 * nth node of list
 * @head: head of the list
 * index: index of a node
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	
	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head)
}
