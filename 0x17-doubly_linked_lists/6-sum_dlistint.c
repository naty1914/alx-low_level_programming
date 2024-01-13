#include "lists.h"


/**
 * sum_dlistint - Returns the sum of all the data (n) of  list
 * @head: Pointer to head of the list
 *
 * Return: Sum of all data in the linked list
 */

int sum_dlistint(dlistint_t *head)
{
int total = 0;

while (head != NULL)
{
total += head->n;

head = head->next;
}

return (total);
}
