#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: head node of the singly linked list
 * Return: the head node's data (n)
 * or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int headData;
if (*head == NULL)
return (0);
temp = *head;
headData = (*head)->n;
*head = (*head)->next;
free(temp);
return(headData);
}
