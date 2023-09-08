#include "hash_tables.h"

/**
 * hash_table_delete -  function that deletes a hash table.
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *buffer, *free_aux;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		buffer = ht->array[i];
		while (buffer)
		{
			free_aux = buffer;
			buffer = buffer->next;
			if (free_aux->key)
				free(free_aux->key);
			if (free_aux->value)
				free(free_aux->value);
			free(free_aux);
		}
	}
	free(ht->array);
	free(ht);
}