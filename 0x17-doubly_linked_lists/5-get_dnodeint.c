#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 * Return: Address of the node at the index, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    while (head && index > 0)
    {
        head = head->next;
        index--;
    }

    return head;
}
