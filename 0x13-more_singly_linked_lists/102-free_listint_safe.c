#include "lists.h"

/**
 * free_listint_safe - frees a set of linked list
 * @h: pointer of the first node in the linked list
 *
 * Return: no of elements in the removed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = 0;
			len++;
			break;
		}
	}

	*h = 0;

	return (len);
}
