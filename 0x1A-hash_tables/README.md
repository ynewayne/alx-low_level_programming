This readme contains the description of all scripts in the ALX program task 0x1A-Hash Tables
**README.md
# C - Hash tables

In this project, I gained knowledge about hashing through the implementation of hash functions and hash tables in C.

## Tests :heavy_check_mark:

* [tests](./tests): Directory containing test files.

## Header File :file_folder:

* [hash_tables.h](./hash_tables.h): Header file that encompasses all type and function definitions and prototypes created for this project.

Data Structures:
```
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;
```

Function Prototypes:

| File | Prototype |
| --- | --- |
| `0-hash_table_create.c` | `hash_table_t *hash_table_create(unsigned long int size);` |
| `1-djb2.c` | `unsigned long int hash_djb2(const unsigned char *str);` |
| `2-key_index.c` | `unsigned long int key_index(const unsigned char *key, unsigned long int size);` |
| `3-hash_table_set.c` | `int hash_table_set(hash_table_t *ht, const char *key, const char *value);` |
| `4-hash_table_get.c` | `char *hash_table_get(const hash_table_t *ht, const char *key);` |
| `5-hash_table_print.c` | `void hash_table_print(const hash_table_t *ht);` |
| `6-hash_table_delete.c` | `void hash_table_delete(hash_table_t *ht);` |
| `100-sorted_hash_table.c` | `shash_table_t *shash_table_create(unsigned long int size);` |
| | `int shash_table_set(shash_table_t *ht, const char *key, const char *value);` |
| | `char *shash_table_get(const shash_table_t *ht, const char *key);` |
| | `void shash_table_print(const shash_table_t *ht);` |
| | `void shash_table_print_rev(const shash_table_t *ht);` |
| | `void shash_table_delete(shash_table_t *ht);` |

## Tasks :page_with_curl:

* **0. >>> ht = {}**
  * [0-hash_table_create.c](./0-hash_table_create.c): C function for creating a `hash_table_t` hash table.
    * Returns a pointer to the new hash table or `NULL` if the function fails.

* **1. djb2**
  * [1-djb2.c](./1-djb2.c): C function implementing the djb2 hashing algorithm.

* **2. key -> index**
  * [2-key_index.c](./2-key_index.c): C function that calculates the index where a key/value pair should be stored in the array of a `hash_table_t` hash table.

* **3. >>> ht['betty'] = 'holberton'**
  * [3-hash_table_set.c](./3-hash_table_set.c): C function for adding an element to a `hash_table_t` table.
    * Returns `1` on success, `0` otherwise.
    * The `key` parameter must not be an empty string.

* **4. >>> ht['betty']**
  * [4-hash_table_get.c](./4-hash_table_get.c): C function for retrieving a value associated with a key in a `hash_table_t` hash table.
    * Returns `NULL` if no matching `key` is found.

* **5. >>> print(ht)**
  * [5-hash_table_print.c](./5-hash_table_print.c): C function for printing a `hash_table_t` hash table.
    * Prints `key`/`value` pairs in the order they appear in the hash table's array.

* **6. >>> del ht**
  * [6-hash_table_delete.c](./6-hash_table_delete.c): C function for deleting a `hash_table_t` hash table.

* **7. $ht['Betty'] = 'Holberton'**
  * [100-sorted_hash_table.c](./100-sorted_hash_table.c): C functions defining a sorted hash table `shash_table_t`.
    * Functions similarly to a `hash_table_t` hash table but sorts key/value pairs alphabetically based on key ASCII values.
    * Includes a function `shash_table_print_rev()` for printing the hash table in reverse order."
