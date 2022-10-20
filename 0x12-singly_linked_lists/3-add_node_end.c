#include "lists.h"
/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}
/**
 * add_node_end - adds node to the end of a linked list
 * @head: first node of the list to be substituted
 * @str: string to be duplicated
 * Return: number of elements in a list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	/* set temp to head, move temp, set temp->next to new_node */
	temp = (*head);
	/* move temp->next not NULL then set temp->next to new_node */
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
