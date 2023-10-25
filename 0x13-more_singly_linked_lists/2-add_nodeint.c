#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the head of the list.
 * @n: Value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));   // Allocate memory for the new node

    if (new_node == NULL)    // Check if memory allocation failed
    {
        return NULL;
    }

    new_node->n = n;         // Set the value of the new node
    new_node->next = *head;  // Make the new node point to the current head

    *head = new_node;        // Update the head to point to the new node

    return new_node;         // Return the address of the new element
}
