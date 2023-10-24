#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: A pointer to a pointer to the head a the  list
* @n :Integer value to be stored in the new node at the end
* Return: address of the new element or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr;
listint_t *end_node;
ptr = *head;

if (head == NULL)
return (NULL);

end_node = malloc(sizeof(listint_t));

if (end_node == NULL)
{
return (NULL);
}
end_node->n = n;
end_node->next = NULL;
if (*head == NULL)
{
*head = end_node;
return (end_node);
}


while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = end_node;

return (end_node);

}


