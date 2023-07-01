#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
*print_list - fonction
*@h: pointer to the head of the list
*Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t nb = 0;

	while (h != NULL)
	{
		nb++;
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->n, h->str);
		h = h->next;
		return (nb);
	}
}
