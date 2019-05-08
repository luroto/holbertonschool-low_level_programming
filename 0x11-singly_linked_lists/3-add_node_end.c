#include "lists.h"
#include <string.h>
/**
 * add_node_end - Add a new node at the end.
 *@n: Data to be stored
 *@head: Pointer to another pointer (node)
 * Return: the address of the new node or NULL if the function fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevonodo, *temp;

	nuevonodo = malloc(sizeof(list_t));
	if (nuevonodo == NULL)
	{
		free(nuevonodo);
		return (NULL);
	}
	nuevonodo->str = strdup(str);
	nuevonodo->next = NULL;
	if (*head == NULL)
	{
		*head = nuevonodo;
		return (nuevonodo);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = nuevonodo;
	return (nuevonodo);
}
