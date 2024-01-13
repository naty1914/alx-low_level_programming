#include "lists.h"

/**
 * dlistint_len -  It returns the number of elements in a linked list
 * @h: Pointer to the head of the  list
 *
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count_node;

count_node = 0;
while (h != NULL)
{
count_node++;
h = h->next;
}

return (count_node);
}
