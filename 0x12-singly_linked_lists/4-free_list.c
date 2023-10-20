#include "lists.h"

/**
 * free_list -  a function that frees a list_t list
 * @head : A pointer to the list
 * Return: Nothing
 */

void free_list(list_t *head)
{
list_t *current;
list_t *temp;
current = head;
while (current)
{
temp = current;
current = current->next;
free(temp->str);
free(temp);
}
}
