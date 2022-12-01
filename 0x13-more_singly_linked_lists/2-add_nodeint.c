#include "list.h"

/**
 * add_nodeint - adds new node at the beginning
 * of a linked list
 * @head: head of a list
 * @n: element
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
