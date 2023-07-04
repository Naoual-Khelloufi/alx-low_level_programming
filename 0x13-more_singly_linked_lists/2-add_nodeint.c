#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: pointer to the head of the existing list
 * @n: data of the new node
 * Return: NULL or adress of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
