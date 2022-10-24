#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head node of the singly linked list
 * @index: position of the node to be located
 * Return: the node located
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
  unsigned int node = 0;
  while (node < index)
    {
      if (head == NULL)
	return (NULL);
      head = head->next;
      node++;
    }
  return (head);
}

  
