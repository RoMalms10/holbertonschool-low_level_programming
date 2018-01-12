#include "hash_tables.h"

/**
  * hash_table_set - Inserts a key and value in the array
  * @ht: the hash table
  * @key: the key to put in the array
  * @value: the value ot assign to they key
  * Return: 1 if succeeded, 0 if not
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *search;
	hash_node_t *new_node;
	unsigned long int index = 0;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	search = ht->array[index];
	while (search != NULL)
	{
		if (strcmp(search->key, key) == 0)
		{
			search->value = (char *)value;
			return (1);
		}
		search = search->next;
	}

	new_node->key = (char *)key;
	new_node->value = (char *)value;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
