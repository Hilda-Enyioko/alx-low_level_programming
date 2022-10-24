#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: head node of the listint_t list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
listint_t *new;
while (head)
{
new = head->next;
free(head->n);
free(head);
head = new;
}
}
