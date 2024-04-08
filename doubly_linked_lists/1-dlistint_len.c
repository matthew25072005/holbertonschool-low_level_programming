#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	for (; h; h = h->next)
	{
	nodes++;
	}

	return (nodes);
}
