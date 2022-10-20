#include "lists.h"
/**
 * list_len - computes the number of elements in a
 * linked list of struct type
 * @h: node of the element
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t num_elements;

	num_elements = 0;
	while (h != NULL)
	{
		h = h->next;

		num_elements++;
	}
	return (num_elements);
}
