#include <stdio.h>
#include "your-header-file.h"   // Include the header file that defines listint_t and related functions

size_t print_listint(const listint_t *h)
{
    const listint_t *current = h;    // Create a pointer to traverse the list
    size_t count = 0;                // Initialize the count variable

    while (current != NULL)
    {
        printf("%d\n", current->n);  // Print the value of the current node
        current = current->next;     // Move to the next node
        count++;                     // Increment the count
    }

    return count;                    // Return the number of nodes
}
