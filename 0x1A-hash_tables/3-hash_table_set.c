#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_pos = 0;
	char *value_copy, *key_copy;
	hash_node_t  *buffer, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index_pos = key_index((const unsigned char *)key, ht->size);
	buffer = ht->array[index_pos];

	while (buffer)
	{
		if (!strcmp(key, buffer->key))
		{
			free(buffer->value);
			buffer->value = value_copy;
			return (1);
		}
		buffer = buffer->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	key_copy = strdup(key);
	if (!key_copy)
		return (0);
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[index_pos];
	ht->array[index_pos] = new_node;
	return (1);
}
