#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
 dlistint_t *ptr;
ptr =malloc(sizeof( dlistint_t));
if (ptr == NULL)
    {
  
        return NULL;
    }

ptr->n = n;
ptr->next = NULL;
ptr->prev = NULL;
ptr->next =*head;

*head = ptr;
return ptr;


}
