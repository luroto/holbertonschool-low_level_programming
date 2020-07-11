#include "lists.h"

/**
 * print_dlistint - Prints the elements of a list
 *@h: Pointer from another function
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t iteranodo = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		iteranodo++;
	}
	return (iteranodo);
}
