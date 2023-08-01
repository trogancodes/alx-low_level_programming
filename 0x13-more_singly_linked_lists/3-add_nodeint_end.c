#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: points to the first element of the list
 * @n: data for new element insertion
 *
 * Return: pointer to the new node, or NULL if false
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
