#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 **add_node - adds a new node
 *@head: Pointer to the head of the node list
 *@str: String to be allocated
 *Return: a pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = strdup(str);
	while (str[i])
	{
	i++;
	}
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
