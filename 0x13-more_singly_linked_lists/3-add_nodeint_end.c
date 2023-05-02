#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list
* @head: Pointer to a pointer to the head of the list
* @n: Value of the new node
*
* Return: Address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));
listint_t *lastnode = *head;

if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
{
*head = newnode;
return (newnode);
}

while (lastnode->next != NULL)
lastnode = lastnode->next;

lastnode->next = newnode;

return (newnode);
}

