#include "main.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

/**
 * key_index - generates the key using hash_djb2
 *
 * @key: pointer to the key
 * @size: size of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

/**
 * htb - creates a hash table
 * @size: unsigned long int
 * Return: hash_table_t* pointer to the hash table
 */
hash_table_t *htb(unsigned long int size)
{
	hash_table_t *ptr;

	if (size == 0)
		return (NULL);

	ptr = calloc(1, sizeof(hash_table_t));
	if (!ptr)
		return (NULL);
	ptr->size = size;
	ptr->array = calloc(1, sizeof(hash_node_t *));
	if (!ptr->array)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}