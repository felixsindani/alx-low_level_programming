#include "hash_tables.h"

/**
 * shash_table_create - function to Creates a sorted hash table
 * @size: size of new_element sorted hash table
 * Return: If an error occurs - NULL,
 * Otherwise - a pointer to the new_element sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - func that Adds an element to a sorted hash table
 * @ht: sorted hash table.
 * @key: key-cannot be an empty string.
 * @value: The value associated with key
 * Return: Upon failure - 0,Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_element, *buff;
	char *copy_of_value;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_of_value = strdup(value);
	if (copy_of_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	buff = ht->shead;
	while (buff)
	{
		if (strcmp(buff->key, key) == 0)
		{
			free(buff->value);
			buff->value = copy_of_value;
			return (1);
		}
		buff = buff->snext;
	}

	new_element = malloc(sizeof(shash_node_t));
	if (new_element == NULL)
	{
		free(copy_of_value);
		return (0);
	}
	new_element->key = strdup(key);
	if (new_element->key == NULL)
	{
		free(copy_of_value);
		free(new_element);
		return (0);
	}
	new_element->value = copy_of_value;
	new_element->next = ht->array[index];
	ht->array[index] = new_element;

	if (ht->shead == NULL)
	{
		new_element->sprev = NULL;
		new_element->snext = NULL;
		ht->shead = new_element;
		ht->stail = new_element;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_element->sprev = NULL;
		new_element->snext = ht->shead;
		ht->shead->sprev = new_element;
		ht->shead = new_element;
	}
	else
	{
		buff = ht->shead;
		while (buff->snext != NULL && strcmp(buff->snext->key, key) < 0)
			buff = buff->snext;
		new_element->sprev = buff;
		new_element->snext = buff->snext;
		if (buff->snext == NULL)
			ht->stail = new_element;
		else
			buff->snext->sprev = new_element;
		buff->snext = new_element;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve value associated with a key of sorted hash table.
 * @ht: sorted hash table.
 * @key: key to get the value of
 * Return: If the key cannot be matched - NULL,
 * Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *buff;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		buff = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = buff;
	}

	free(head->array);
	free(head);
}