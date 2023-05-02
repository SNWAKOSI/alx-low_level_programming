#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of a linked list
 * @head: pointer to the first node on the lists
 * @n: data to be inputed  in that new node
 *
 * Return: points to the new node, or NULL if failure occurs
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
