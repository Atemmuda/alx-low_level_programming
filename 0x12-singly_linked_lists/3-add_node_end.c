#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the begining of a list_t list
 * @head: pointer to the head
 * @str: pointer to the name of the element to be set to the head
 *
 * Return: pointer to the first element in the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);

	new_element->str = strdup(str);
	new_element->len = len;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_element;

	return (new_element);
}