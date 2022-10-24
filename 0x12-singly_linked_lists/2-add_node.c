#include <stdlib.h>
#include <string.h>
#include <list.h>

/**
 * add_node - adds a new node at the begining of a list_t list
 * @head: pointer to the head
 * @str: pointer to the name of the element to be set to the head
 *
 * Return: pointer to the first element in the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *element;
	unsigned int len = 0;

	while (str[len])
		len++;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);
	else
	{
		element->str = strdup(str);
		new->len = len;
		new->next = (*head);
		(*head) = new;
	}	

	return (*head);
}
