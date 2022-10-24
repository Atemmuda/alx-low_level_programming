#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of a list_t list
 * @h: pointer to the structure list_t
 *
 * Return: the size of the list
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
				printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
