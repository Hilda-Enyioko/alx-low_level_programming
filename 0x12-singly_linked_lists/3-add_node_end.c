#include "lists.h"
#include <string.h>

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head:
 * @str: node to be added
 * Return: the address of the new element
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
int i; /*length of str*/
char strDup; /*duplicate of str*/
if (str == NULL)
(
