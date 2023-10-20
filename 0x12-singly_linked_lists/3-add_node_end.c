#include "lists.h"

/**
* add_node_end - a function that adds a new node at the end of a list_t list
* @head: pointer to the list
* @str : string to be added to the list
* Return: the address of the new element, or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
int len;
char *d; 

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

d = strdup(str);
if (str == NULL)
{
free(new_node);
return (NULL);
}

for (len = 0; str[len];)
len++;

new_node->str = d;
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
*head = new_node;
else
{
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
}
return (*head);
}
