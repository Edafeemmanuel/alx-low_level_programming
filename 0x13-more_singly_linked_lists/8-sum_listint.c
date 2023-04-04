#include "lists.h"

/**
 * sum_listint - add  all  data (n) of  listint_t linked list.
 * @head: pointer to  First node
 *
 * Return: add all  data
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
