#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: pointer to the head node
 * @index: index of the node to be deleted
 * Return: 1 on success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
listint_t *image = *head;
unsigned int node;
if (image == NULL)
return (-1);
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
for (node = 0; node < (index - 1); node++)
{
if (image->next == NULL)
return (-1);
image = image->next;
}
temp = image->next;
image->next = temp->next;
free(temp);

return (1);
}
