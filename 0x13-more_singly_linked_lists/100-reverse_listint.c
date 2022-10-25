#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head node of the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *temp;
listint_t *tail;
if (*head == NULL || head == NULL)
return (NULL);
tail = NULL;
while ((*head)->next != NULL)
{
temp = (*head)->next;
(*head)->next = tail;
tail = *head;
*head = temp;
}
(*head)->next = tail;
return (*head);
}
