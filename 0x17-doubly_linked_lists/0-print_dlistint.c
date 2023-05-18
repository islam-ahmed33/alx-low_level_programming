#include "lists.h"

/**
 * print_dlistint - function to print the list
 * @h: pointer to the head
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cnt;

	for (cnt = 0; h != NULL; cnt++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cnt);
}
