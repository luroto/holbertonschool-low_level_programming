#include <stdlib.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - Insert a node at a given index in a
 *single linked list
 *@head: Linked list to receive new nodes
 *@idx: Index for adding on the linked list
 *@n : Data to be added
 *Return: Address of the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int tofound = 0;
	listint_t *newnode, *initial;

	initial = *head;
	newnode = malloc(sizeof(*head));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	while (*head != NULL)
	{
		if (idx == 0)
		{
			newnode->next = *(head);
			*head = newnode;
			return (newnode);
		}
		else if (tofound == (idx - 1))
		{
			newnode->next = (*head)->next;
			(*head)->next = newnode;
			*head = initial;
			return (newnode);
		}
		(*head) = (*head)->next;
		tofound++;
	}
	free(newnode);
	return (NULL);
}
