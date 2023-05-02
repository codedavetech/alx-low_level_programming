#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: linked list to search for
*
* Return: address of the node where the loop starts, or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
listint_t *ptr = head;
while (ptr != slow)
{
ptr = ptr->next;
slow = slow->next;
}
return ptr;
}
}

return NULL;
}

