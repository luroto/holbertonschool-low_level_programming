#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: pointer to the first node in the linked list
 *@index: number of the node to be found
 *Return: the found node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int compaite = 0;

	while (head != NULL)
	{
		if (compaite == index)
		{
			return (head);
		}
		head = head->next;
		compaite++;
	}
	return (NULL);
}
