# C - Hash Tables

This project implements a hash table data structure in C, demonstrating various operations like creation, insertion, retrieval, and deletion.

## Files Description

* `hash_tables.h` - Header file containing all function prototypes and data structures
* `0-hash_table_create.c` - Creates a hash table
* `1-djb2.c` - Implements the djb2 hash function algorithm
* `2-key_index.c` - Returns the index of a key in the hash table array
* `3-hash_table_set.c` - Adds an element to the hash table
* `4-hash_table_get.c` - Retrieves a value associated with a key
* `5-hash_table_print.c` - Prints a hash table
* `6-hash_table_delete.c` - Deletes a hash table

## Data Structures

```c
/**
 * struct hash_node_s - Node of a hash table
 * @key: The key (string)
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
```

## Compilation

All files will be compiled on Ubuntu 20.04 LTS using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hash_table
```