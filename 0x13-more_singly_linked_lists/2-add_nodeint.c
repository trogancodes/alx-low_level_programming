#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a linked list
 * @head: points to the first node of the list
 * @n: data for new node insertion
 *
 * Return: points to the new node, or NULL if false
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
