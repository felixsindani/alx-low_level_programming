#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *buffer;
	int key_found = 0;

	if (!ht)/*ht is NULL, don’t print anything*/
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		buffer = ht->array[i];
		while (buffer)
		{
			if (key_found)
				printf(", ");
			printf("'%s': '%s'", buffer->key, buffer->value);
			key_found = 1;
			buffer = buffer->next;
		}
	}
	printf("}\n");
}
