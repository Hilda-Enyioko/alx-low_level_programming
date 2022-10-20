#include <stdlib.h>
#include "main.h"

/**
 * free_list - frees a list_t list
 * @head: head node of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
