#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 *free_listint2 - free a list
 *@head: source of list
 *Return: It's a void function
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (*head == NULL)
	{
		return;
	}
	else
	{
		while (*head != NULL)
		{
			aux = (*head)->next;
			free(*head);
			*head = aux;
		}
	}
}
