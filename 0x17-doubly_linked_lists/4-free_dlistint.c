#include "lists.h"

/**
 * free_dlistint - It frees a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *free_ptr, *temp_ptr;

free_ptr = head;

while (free_ptr != NULL)
{
temp_ptr = free_ptr->next;

free(free_ptr);
free_ptr = temp_ptr;
}
}
