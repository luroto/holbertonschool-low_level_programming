#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int tofound = 0;
	listint_t *newnode;

	while (*head != NULL)
	{
		if (tofound == idx)
		{
			newnode = malloc(sizeof(listint_t));
			if (newnode == NULL)
			{
				free(newnode);
				return(NULL);
			}
			newnode = (*head)->next;
			newnode->n = n;
			(*head)->next = newnode;
			newnode = *head;
		}
		tofound++;
		*head = (*head)->next;
	}
	return(newnode);
}
