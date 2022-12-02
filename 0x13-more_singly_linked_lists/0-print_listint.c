#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: headof lost to be printed
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
