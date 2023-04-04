#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes a head node
 * @head:  double pointer
 *
 *Return: null
 */
int pop_listint(listint_t **head)
{
	listint_t *strt;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = strt->next;
	n = strt->n;
	free(strt);
	return (n);
}
