#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of the list
 *@head: Pointer to a node
 *@index: Number of node to be returned
 * Return: the nth node or NULL if the function fails.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int itera;

	for (itera = 0; head->next != NULL; itera++);
	{
		head = head->next;
		if (itera == index)
		{
			return (head);
		}
	}
}
