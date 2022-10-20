#include "lists.h"
/**
 * print_list - prints the elements of a linked list
 * @h: node of the element
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t j;

	temp = h;

	j = 0;
	while (temp != NULL)
	{
		if (temp->str != NULL)
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		if (temp->str == NULL)
			printf("[0] (nil)\n");

		temp = temp->next;
		j++;
	}
	return (j);
}
