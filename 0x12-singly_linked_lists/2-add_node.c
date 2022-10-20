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
int *i;
char *dupStr;
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);
dupStr = strdup(str);
if (dupStr == NULL)
{
free(temp);
return (NULL);
}
i = 0;
while (str[i])
i++;
temp->str = dupStr;
temp->len = i;
temp->next = *head;
*head = temp;

return (new);
}
