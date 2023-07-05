#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: pointer to the address of the head of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
