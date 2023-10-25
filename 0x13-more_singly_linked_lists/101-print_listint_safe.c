#include "lists.h"

/**
 *print_listint_safe - Prints a listint_t linked list
 *@head: A pointer to pointer to of the head node list
 *Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *ptr = head;
const listint_t *temp;
size_t i = 0;

while (ptr != NULL)
{
printf("[%p] %d\n", (void *)ptr, ptr->n);
i++;
temp = ptr;
ptr = ptr->next;
if (temp <= ptr)
{
printf("-> [%p] %d\n", (void *)ptr, ptr->n);
break;
}
}
return (i);

}
