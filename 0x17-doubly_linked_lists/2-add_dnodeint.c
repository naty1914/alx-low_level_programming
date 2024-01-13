#include "lists.h"





dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
struct dlistint_s *ptr;
ptr =malloc(sizeof( struct dlistint_s));
ptr->n = n;

ptr->prev = NULL;
ptr->next =*head;

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
return *head;


}
