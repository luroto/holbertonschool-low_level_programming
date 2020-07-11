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

	if (head == NULL)
		return (NULL);
	for (itera = 0; head != NULL; itera++)
	{
		if (itera == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
