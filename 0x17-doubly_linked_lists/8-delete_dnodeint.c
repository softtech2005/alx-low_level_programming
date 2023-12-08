#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete, starting from 0
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;
    unsigned int i;

    if (*head == NULL)  /* Check if the list is empty */
        return -1;

    current = *head;

    if (index == 0)  /* If the node to delete is the head */
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    for (i = 0; i < index && current != NULL; i++)
        current = current->next;

    if (current == NULL)  /* If the index is out of range */
        return -1;

    temp = current->prev;
    temp->next = current->next;

    if (current->next != NULL)
        current->next->prev = temp;

    free(current);
    return 1;
}
