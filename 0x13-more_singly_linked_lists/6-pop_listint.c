#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: A pointer to the pointer to the head of the node list
 * Return:It returns the head node's data (n)
 */

int pop_listint(listint_t **head)
{
int node_data;
listint_t *old_head;
if (*head == NULL || head == NULL)
return (0);

node_data = (*head)->n;
old_head = *head;
*head = (*head)->next;
free(old_head);

return (node_data);

}
