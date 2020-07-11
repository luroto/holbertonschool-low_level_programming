#include "lists.h"

/**
 * dlistint_len - Prints the number of elements on a linked list
 *@h: Pointer to another function
 * Return: Number of elements on a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t iteraele = 0;

while (h != NULL)
{
	h = h->next;
	iteraele++;
}
return (iteraele);
}
