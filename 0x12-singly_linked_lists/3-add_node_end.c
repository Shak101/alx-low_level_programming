#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added as the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    char *str_copy;
    size_t len = 0;

    while (str != NULL && str[len] != '\0')
        len++;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    str_copy = strdup(str);
    if (str_copy == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->str = str_copy;
    new_node->len = len;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        temp = *
    }	
