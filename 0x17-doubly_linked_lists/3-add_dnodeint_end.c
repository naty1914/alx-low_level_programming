#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of the list
 * @head: Pointer to the head of the  list
 * @n: Data to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *ptr, *temp;
ptr = malloc(sizeof(dlistint_t));
if (ptr == NULL)
{

return (NULL);
}
ptr->n = n;
ptr->next = NULL;
ptr->prev = NULL;


if (*head == NULL)
{

*head = ptr;
return (*head);
}

temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = ptr;
ptr->prev = temp;
return (ptr);

}
