#include "sort.h"

/**
 * insertion_sort_list - Sorts a double linked lists of integers in ascending
 *order
 *@list: The list to be sorted
 * Return: Nothing, it's a zero function
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux;
	listint_t *emer;
	aux = *list;
	while (aux != NULL)
	{
		if (aux->n > aux->next->n)
		{
			emer = aux;
			emer->prev = aux;
			aux ->next = aux->next->next;
			aux->next->prev = aux;
			aux->prev = emer;
			emer->next = aux;
			aux = emer;
		}
		aux = aux->next;
	}
	*list = aux;
}
