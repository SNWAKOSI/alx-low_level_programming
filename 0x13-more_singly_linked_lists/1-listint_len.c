#include "lists.h"

/**
 * listint_len - returns the amount of elements in a linked lists
 * @h: linked list with type listint_t to criss-cross
 *
 * Return: number of nodes present
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
