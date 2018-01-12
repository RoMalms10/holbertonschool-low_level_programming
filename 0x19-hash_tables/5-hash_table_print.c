#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key,
						ht->array[i]->value);
			if (ht->array[i]->next != NULL)
				print_list(ht->array[i]);
			flag = 1;
		}
	}
	printf("}\n");
}

void print_list(hash_node_t *list)
{
	list = list->next;
	while (list != NULL)
	{
		printf(", ");
		printf("'%s': '%s'", list->key, list->value);
		list = list->next;
	}
}
