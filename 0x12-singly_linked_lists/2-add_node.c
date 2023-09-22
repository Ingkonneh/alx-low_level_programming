#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: head of a start list_t list
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *add;
unsigned int len = 0;

while (str[len])
len++;

add = malloc(sizeof(list_t));
if (!add)
return (NULL);

add->str = strdup(str);
add->len = len;
add->next = (*head);
(*head) = add;

return (*head);
}

