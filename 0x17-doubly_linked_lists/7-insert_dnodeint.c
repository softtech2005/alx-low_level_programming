#include "lists.h"
#include <stdio.h>
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the pointer of the head of the list
 * @idx: Index where the new node should be added
 * @n: Value of the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *current = *h;

    if (!new_node)
        return NULL;

    new_node->n = n;

    if (idx == 0)
    {
        new_node->prev = NULL;
        new_node->next = *h;
        if (*h)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    while (current && idx > 1)
    {
        current = current->next;
        idx--;
    }

    if (!current)
    {
        free(new_node);
        return NULL;
    }

    new_node->prev = current;
    new_node->next = current->next;

    if (current->next)
        current->next->prev = new_node;

    current->next = new_node;
    return new_node;
}
