#include "lists.h"
#include <string.h>

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: head node of the list
 * @str: node to be added
 * Return: the address of the new element
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *last;
int i; /*length of str*/
char *strDup; /*duplicate of str*/
new = malloc(sizeof(list_t));
if (str == NULL)
return (NULL); /* return NULL if it failed*/
strDup = strdup(str); /*str needs to be duplicated*/
if (strDup == NULL)
{
free(new);
return (NULL);
}
for (i = 0; str[i];)
i++;
new->str = strDup;
new->len = i;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
return (*head);
}
