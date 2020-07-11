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
	listint_t *newnode,  *aux;

	newnode = malloc(sizeof(*head));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *(head);
		*head = newnode;
		return (newnode);
	}
	aux = *head;
	while (aux != NULL)
	{
		if (tofound == (idx - 1))
		{
			newnode->next = aux->next;
			aux->next = newnode;
			return (newnode);
		}
		aux = aux->next;
		tofound++;
	}
	free(newnode);
	return (NULL);
}
