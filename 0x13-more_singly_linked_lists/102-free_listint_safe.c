#include "lists.h"

/**
 *free_listint_safe - Frees a listint_t list
 *@h: A pointer to pointer of the head node list
 *Return: size of the list freed
 */

size_t free_listint_safe(listint_t **h)
{

listint_t *ptr;
size_t i = 0;
if (*h == NULL || h == NULL)
return (0);

while (*h != NULL)
{
i++;
ptr = *h;
*h = (*h)->next;
ptr->next = NULL;
free(ptr);

if (ptr <= *h)
{
*h = NULL;
break;
}
}
return (i);

}
