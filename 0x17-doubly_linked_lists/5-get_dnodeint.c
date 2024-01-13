#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the list's nth node
 * @head: A pointer to the head of the  list
 * @index:Index of the node, beginning from zero
 *
 * Return: A pointer to the nth node, or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x = 0;

while (head != NULL)
{

if (x == index)
return (head);

head = head->next;
x++;

}

return (NULL);


}
