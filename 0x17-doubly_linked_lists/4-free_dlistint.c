#include "lists.h"

/**
 * clear_dlistint - releases memory occupied by a dlistint_t list.
 * @head: reference to the beginning of the list
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
    if (head == NULL)
        return;

    while (head->next)
    {
        head = head->next;
        free(head->prev);
    }
    free(head);
}
