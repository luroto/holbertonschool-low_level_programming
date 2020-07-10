#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 *pop_listint - deletes the first node but returns its data
 *@head: source list
 *Return: the first node data
 */
int pop_listint(listint_t **head)
{
	listint_t *auxhead;
	int auxn;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		auxhead = *head;
		auxn = auxhead->n;
		auxhead = auxhead->next;
		free(*head);
		*head = auxhead;
	}
	return (auxn);
}
