#include "lists.h"

/**
* free_listint2 -  frees a listint_t list
* and sets the head to NULL
* @head : A pointer to a pointer to the head of a listint_t list
* Return : Void
*/
void free_listint2(listint_t **head)
{
listint_t *free_node;

if (head == NULL)
{
return;
}

while (*head != NULL)
{
free_node = (*head)->next;
free(*head);
*head = free_node;

}


}


