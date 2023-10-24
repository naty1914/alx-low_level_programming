#include  "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: A pointer to a pointer to the head a the  list
* @n :Integer value to be stored in the new node at the end
* Return: address of the new element or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *first_node = malloc(sizeof(listint_t));
if (first_node == NULL)
return (NULL);
first_node->n = n;
first_node->next = NULL;

first_node->next = *head;
*head = first_node;
return (*head);
}

