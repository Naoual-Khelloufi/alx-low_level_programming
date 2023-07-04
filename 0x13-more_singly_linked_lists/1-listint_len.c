#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked listint_t list
 * @h: poiter to the head of the list
 * Return: number of element in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		nb++;
		h = h->next;
	}

	return (nb);
}
