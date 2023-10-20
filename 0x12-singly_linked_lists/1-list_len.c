#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Prints the length of all the elements of a list_t list
 * @h: pointer to the list
 * Return: the number of elements in a list_t list
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;

}
return (count);

}
