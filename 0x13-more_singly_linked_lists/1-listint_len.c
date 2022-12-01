#include "list.h"

/**
 * listint_len - prints number of elemnts
 * in alinked list
 * @h: head of the list
 * Return: number of nnodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
