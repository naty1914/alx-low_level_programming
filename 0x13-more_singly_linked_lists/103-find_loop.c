#include "lists.h"

/**
 *find_listint_loop - Finds loop in a linked list
 *@head: A pointer to head node list
 *Return: Address of the node where the loop start or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *temp, *temp2;
if (!head || !head->next)
return (NULL);
temp = head->next;
temp2 = head->next->next;

while (temp2 && temp2->next)
{
if (temp == temp2)
{
temp = head;
while (temp != temp2)
{
temp = temp->next;
temp2 = temp2->next;
}
return (temp);
}
temp = temp->next;
temp2 = temp2->next->next;
}

return (NULL);

}
