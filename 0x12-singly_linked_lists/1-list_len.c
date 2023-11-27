#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list
 * @h: list of items to be to be counted
 *
 * Return: size of the elements
*/
size_t list_len(const list_t *h)
{
    size_t len = 0;

    while (h)
    {
        len++;
        h = h->next;
    }
    return (len);
}