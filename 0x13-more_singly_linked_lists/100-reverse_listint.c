#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;  /* Save the next node. */
		(*head)->next = prev;  /* Reverse the current node's next pointer. */

		/* Move the pointers one step forward. */
		prev = *head;
		*head = next;
	}

	/* Update the head to point to the new first node (prev). */
	*head = prev;

	return *head;
}

