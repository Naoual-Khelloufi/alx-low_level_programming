#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_t - struct
 * @str: string
 * @n: integer
 * @next: pointer to the next element
 */
struct list_t
{
	char *str;
	int n;
	struct list_t *next;
};
/**
 *list_t -  typedef for list_t struct
 */
typedef struct list_t list_t;

size_t print_list(const list_t *h);


#endif

