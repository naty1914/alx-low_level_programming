#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
struct dlistint_s *ptr;
ptr =malloc(sizeof( struct dlistint_s));
ptr->n = n;
ptr->next = NULL;
ptr->prev = NULL;
ptr->next =*head;

*head= ptr;
return *head;


}
