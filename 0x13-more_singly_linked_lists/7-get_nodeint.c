#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: Pointer to head of the node list
 *@index: index of the node at starting 0
 *Return:returns the nth node of a listint_t linked list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int i = 0;
listint_t *current_node = head;

while (current_node != NULL)
{
if (i == index)
return (current_node);

current_node = current_node->next;
i++;
}
return (NULL);

}
