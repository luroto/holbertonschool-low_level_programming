#include "lists.h"

/**
 * sum_dlistint - Adds all the values on a linked list
 *@head: First node of the LL
 *Return: sum of all node's values, otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
