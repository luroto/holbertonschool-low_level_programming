#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 **add_nodeint_end - adds a node at the end of the list
 *@head: the start of the list
 *@n: value to be stored at n variable in list struct
 *Return: the address of that node
 *
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeatend, *aux;

	nodeatend = malloc(sizeof(listint_t));
	if (nodeatend == NULL)
	{
		free(nodeatend);
		return (NULL);
	}
	nodeatend->next = NULL;
	nodeatend->n = n;
	if (*head == NULL)
	{
		*head = nodeatend;
		return (*head);
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = nodeatend;
		return (nodeatend);
	}
}
