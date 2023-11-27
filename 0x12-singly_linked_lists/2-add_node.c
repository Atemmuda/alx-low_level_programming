#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list
 * @head: pointer to the head of the list to add to
 * @str: item to add to list
 *
 * Return: pointer to the first element in the list
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_ele;
    unsigned int len = 0;

    while (str[len])
        len++;
    
    new_ele = malloc(sizeof(list_t));
    if (new_ele == NULL)
    {
        return NULL;
    }
    new_ele->str = strdup(str);
    new_ele->len = len;
    new_ele->next = (*head);
    (*head) = new_ele;

    return (*head);   
}