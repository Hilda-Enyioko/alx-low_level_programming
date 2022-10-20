#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head singly linked list
 * @str: new node to be added
 * Return: address of the new element
 * Or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
size_t *i;
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);
temp->str = strdup(str);
i = 0;
while (str[i] != '\0')
i++;
temp->len = i;
temp->next = *head;
*head = temp;

return (*head);
}
