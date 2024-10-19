```markdown
# 0x17. C - Doubly Linked Lists

This project contains implementations of various operations on doubly linked lists in C.

## Files

* `lists.h`: Header file containing function prototypes and the doubly linked list structure definition.
* `0-print_dlistint.c`: Function that prints all elements of a doubly linked list.
* `1-dlistint_len.c`: Function that returns the number of elements in a doubly linked list.
* `2-add_dnodeint.c`: Function that adds a new node at the beginning of a doubly linked list.
* `3-add_dnodeint_end.c`: Function that adds a new node at the end of a doubly linked list.
* `4-free_dlistint.c`: Function that frees a doubly linked list.
* `5-get_dnodeint.c`: Function that returns the nth node of a doubly linked list.
* `6-sum_dlistint.c`: Function that returns the sum of all data in a doubly linked list.
* `7-insert_dnodeint.c`: Function that inserts a new node at a given position in a doubly linked list.
* `8-delete_dnodeint.c`: Function that deletes a node at a given position in a doubly linked list.
* `100-password`: File containing the password for crackme4.
* `102-result`: File containing the largest palindrome made from the product of two 3-digit numbers.
* `103-keygen.c`: Keygen for crackme5.

## Compilation

To compile the C files, use:

```

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o `<output_file>`

```plaintext

Replace `<output_file>` with the desired name for the executable.

## Usage

Each C file contains a main function for testing the implemented function. To test a specific function, compile the corresponding C file with the necessary dependencies and run the resulting executable.

## Requirements

* All files will be compiled on Ubuntu 20.04 LTS using gcc
* Code should use the Betty style
* No global variables allowed
* No more than 5 functions per file
* Only C standard library functions allowed are malloc, free, printf and exit
```