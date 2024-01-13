#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *ptr, *tp;
    ptr = malloc(sizeof(dlistint_t));
    if (ptr == NULL) {
 
        return NULL;
    }
    ptr->n = n;
    ptr->next = NULL;
    ptr->prev = NULL;

    if (*head == NULL) {

        *head = ptr;
        return *head;
    }

    tp = *head;
    while (tp->next != NULL)
    {
        tp = tp->next;
    }
    tp->next = ptr;
    ptr->prev = tp;

    return ptr;
}

