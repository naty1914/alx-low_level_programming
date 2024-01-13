#include "lists.h"


/**
 * add_dnodeint - Adds a new node at the beginning of  list
 * @head: Pointer to the head of the  list
 * @n: Data to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *ptr;
ptr = malloc(sizeof(dlistint_t));
if (ptr == NULL)
{

return (NULL);
}
ptr->n = n;
ptr->prev = NULL;

if (*head != NULL)
{

ptr->next = *head;
(*head)->prev = ptr;
}
*head = ptr;

return (ptr);


}
