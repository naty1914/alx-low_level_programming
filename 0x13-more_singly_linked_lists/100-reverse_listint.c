#include "lists.h"

/**
 *reverse_listint - Reverses a listint_t linked list
 *@head: A pointer to the pointer of the head node list
 *Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *ptr = NULL;
listint_t *temp;

while (*head != NULL)
{
temp = (*head)->next;
(*head)->next = ptr;
ptr = *head;
*head = temp;
}
*head = ptr;
return (ptr);


}
