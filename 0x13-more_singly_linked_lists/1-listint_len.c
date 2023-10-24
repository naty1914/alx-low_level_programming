#include "lists.h"


/**
 * listint_len - Returns the num of elements in a linked list.
 * @h: A pointer to the head the linked list
 *
 * Return: The number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
int count = 0;
const listint_t *ptr = h;

while (ptr != NULL)
{

ptr = ptr->next;
count++;
}
return (count);
}

