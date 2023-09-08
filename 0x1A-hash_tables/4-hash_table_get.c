#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to retrive value
 * Return: value or NULL if key does not exit.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_pos = 0;
	hash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);

	index_pos = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index_pos];
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}
