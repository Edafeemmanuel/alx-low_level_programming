#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t lists.
 *
 *@h: head pointer
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t ct = 0;

	while (h != NULL)
	{
	h = h->next;
		ct++;
	}
	return (ct);
}
