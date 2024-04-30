#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascening order
 * @list: doubly linked list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *temp;

    if (*list == NULL || *list->next == NULL)
    {
        return;
    }
    while (*list->next != NULL)
    {
        if (*list->next->n < *list->prev->n)
        {
            temp = *list->next;
            list->next = list->prev;
            list->prev = temp
        }
        temp = list->next->next;
        list->next = temp;
    }
}
