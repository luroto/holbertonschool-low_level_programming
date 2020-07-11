#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end.
 *@n: Data to be stored
 *@head: Pointer to another pointer (node)
 * Return: the address of the new node or NULL if the function fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevonodo, *temp;

	nuevonodo = malloc(sizeof(dlistint_t));
	if (nuevonodo == NULL)
	{
		free(nuevonodo);
		return (NULL);
	}
	nuevonodo->n = n;
	nuevonodo->next = NULL;
	if (*head == NULL)
	{
		nuevonodo->prev = NULL;
		*head = nuevonodo;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = nuevonodo;
	nuevonodo->prev = *head;
	return (nuevonodo);
}
