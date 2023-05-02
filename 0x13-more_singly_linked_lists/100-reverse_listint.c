#include "lists.h"
/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to pointer to head of the list
*
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
if (*head == NULL || (*head)->next == NULL)
{
return *head;
}

listint_t *new_head = reverse_listint(&(*head)->next);

(*head)->next->next = *head;
(*head)->next = NULL;

*head = new_head;

return new_head;
}

