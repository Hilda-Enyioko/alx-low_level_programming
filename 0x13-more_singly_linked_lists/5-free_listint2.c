#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * and sets head = NULL
 * @head: head node of the linked list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
listint_t *new;
if (head == NULL)
return;
while (*head)
{
new = (*head)->next;
free(*head);
*head = new;
}
head = NULL;
}
