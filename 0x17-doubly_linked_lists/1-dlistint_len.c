#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h: Pointer to the head of the list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t elements = 0;

    while (h)
    {
        h = h->next;
        elements++;
    }

    return elements;
}
