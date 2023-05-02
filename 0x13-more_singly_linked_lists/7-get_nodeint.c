#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list
 * @index: Index of the node to return (starting at 0)
 *
 * Return: Pointer to the nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;

    while (head != NULL && i < index)
    {
        head = head->next;
        i++;
    }

    return (head == NULL || i < index) ? NULL : head;
}

