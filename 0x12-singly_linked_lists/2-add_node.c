#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head singly linked list
 * @str: new node to be added
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
size_t *i;
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
temp->str = strdup(str);
temp->len = i;
temp->next = *head;
*head = temp;

return (*head);
}
