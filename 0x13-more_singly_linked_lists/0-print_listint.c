#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: header of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node;
	size_t i;

	node = h;

	i = 0;
	while (node != NULL)
	{
		printf("%d\n", node->n);

		node = node->next;

		i++;
	}
	return (i);
}