#include <stddef.h>
#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length
 * @next: next node
 *
 * Description: singly linked list
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlen(const char *str);
#endif
