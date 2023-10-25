#include "lists.h"
/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *current;   // Create a temporary pointer

    while (head != NULL)
    {
        current = head;   // Store the current node in the temporary pointer
        head = head->next;   // Move to the next node
        free(current);   // Free the memory of the current node
    }
}
