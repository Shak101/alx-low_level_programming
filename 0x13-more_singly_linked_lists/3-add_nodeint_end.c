#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include "your-header-file.h"   // Include the header file that defines listint_t and related functions

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the head of the list.
 * @n: Value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));   // Allocate memory for the new node

    if (new_node == NULL)    // Check if memory allocation failed
    {
        return NULL;
    }

    new_node->n = n;         // Set the value of the new node
    new_node->next = NULL;   // Set the next pointer of the new node to NULL

    if (*head == NULL)       // Check if the list is empty
    {
        *head = new_node;    // If the list is empty, make the new node the head of the list
    }
    else
    {
        listint_t *current = *head;   // Create a pointer to traverse the list

        while (current->next != NULL)
        {
            current = current->next;  // Move to the next node
        }

        current->next = new_node;    // Make the last node point to the new node
    }

    return new_node;                // Return the address of the new element
}
