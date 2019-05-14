#include "lists.h"
/**
 *sum_listint - Sums all the data (n) of a linked list
 *@head: Head of the linked list
 *Return: Sum of the all data in the linked list
 */
int sum_listint(listint_t *head)
{
	int suma = 0;

	while (head != NULL)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
