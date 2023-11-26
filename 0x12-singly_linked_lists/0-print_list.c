#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: lsit of items to be printed
 *
 * Return: size of the elements
*/

size_t print_list(const list_t *h)
{
	size_t el_size = 0;

    while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil) \n");
		}
		else
		{
			printf("[%d] %s \n", h->len, h->str);
		}
		h = h->next;
		el_size++;
	}
	return (el_size);
}
