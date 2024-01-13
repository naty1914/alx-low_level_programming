#include "lists.h"





dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
 dlistint_t *ptr;
ptr =malloc(sizeof( dlistint_t));

ptr->n = n;

ptr->prev = NULL;


 if (*head == NULL)
    {
        
        ptr->next = NULL;
    }
    else
    {
    
        ptr->next = *head;
        (*head)->prev = ptr;
    }

*head= ptr;
return ptr;


}
