#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: linked list of type traverse
 *
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
