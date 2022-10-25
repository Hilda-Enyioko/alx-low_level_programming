#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node of the linked list
 * @idx: index of the list where the new node should be added
 * Index starts at 0
 * Return: the address of the new node
 * or NULL if it failed
 * (or if it is not possible to add the new node at index idx)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *image = *head; /*image of the head node*/
unsigned int index;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0) /*if idx is in the head position*/
{
new->next = image;
*head = new;
return (new);
}
index = 0;
while (index < (idx - 1))
{
if (image == NULL || image->next == NULL)
return (NULL);
image = image->next;
index++;
}
new->next = image->next;
image = new;
return (new);
}
