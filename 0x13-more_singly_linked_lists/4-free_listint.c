#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 *free_listint - frees a list*
 *@head: the first node
 *Return: It's a void function.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
