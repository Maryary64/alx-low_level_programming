
drsaffas
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x13-more_singly_linked_lists/2-add_nodeint.c
@drsaffas
drsaffas More on singly linked list.
 1 contributor
23 lines (19 sloc)  489 Bytes
#include "lists.h"

/**
 * add_nodeint - Function to add a new node at the beginning of listint_t list
 * @head: Pointer to head of the listint_t list
 * @n: Pointer to int for the new node
 * Return: address of new element or null if not successful
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
