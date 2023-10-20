#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to the list
 * @str: string to be added to the list
 * Return: the address of the new element  or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int len;
char *d;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
d = strdup(str);
if (d == NULL)
{
free(new_node);
return (NULL);
}
for (len = 0; str[len];)
len++;

new_node->str = d;
new_node->len = len;
new_node->next = *head;

*head = new_node;
return (new_node);

}
