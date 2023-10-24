#include "lists.h"
/**
* free_listint -  frees a listint_t list
* @head : A pointer  to the head of a listint_t list
* Return : Void
*/

void free_listint(listint_t *head)
{
listint_t *free_node = head;

while (head != NULL)
{
free_node = head;
head = head->next;
free(free_node);
}


}

