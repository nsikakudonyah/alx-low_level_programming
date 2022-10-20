#include "lists.h"

/**
 * free_list - frees the memory in the list
 * @head: first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head)
	{
		while (head != NULL)
		{
			free(head->str);
			free(head);
			head = head->next;
		}
	}
}
