#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s
 * @key: The key, string
 * @value: The value corresponding to a key
 * @next: A pointer to next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: the size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the 1st node
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
hash_table_t *htb(unsigned long int size);
#endif
