#include "list.h"

/**
 * sum_listint - returns the sum of data 
 * of a linked list
 * @head: head of a list
 * Retrun: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
