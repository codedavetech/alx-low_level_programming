#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list safely.
* @h: A pointer to the address of the head of the list.
*
* Return: The size of the list that was free'd.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *tmp;
size_t count = 0;

if (!h || !(*h))
return (count);

current = *h;

while (current)
{
count++;
tmp = current;
current = current->next;

if ((void *)tmp <= (void *)current)
{
*h = NULL;
exit(98);
}

free(tmp);
}

*h = NULL;

return (count);
}

