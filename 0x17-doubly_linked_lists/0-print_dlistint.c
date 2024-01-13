#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 * Return: The number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
size_t count_node;
count_node = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count_node++;
}

return (count_node);
}