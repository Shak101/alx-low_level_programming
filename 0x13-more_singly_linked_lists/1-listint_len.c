#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;                // Initialize the count variable

    while (h != NULL)
    {
        h = h->next;                 // Move to the next node
        count++;                     // Increment the count
    }

    return count;                    // Return the number of elements
}
