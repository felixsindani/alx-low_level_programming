#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_t -singly linked list
 * @str: malloc string
 * @len: string length
 * @next_node - next node
 */
typedef struct list_t
{
	unsihned int len;
	char *str;
	struct list_t *next_node;
}list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
