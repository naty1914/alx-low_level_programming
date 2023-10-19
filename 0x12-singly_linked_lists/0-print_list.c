#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to the list
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{

if (h->str  != NULL)
	printf("[%u] %s\n", h->len, h->str);

else
	printf("[0] (nil)\n");

h = h->next;
count++;
}
return (count);
}
