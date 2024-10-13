# C - Bit Manipulation

This project contains C functions that demonstrate bit manipulation techniques.

## Files and Functions

0. `0-binary_to_uint.c`: Contains `unsigned int binary_to_uint(const char *b)` function that converts a binary number to an unsigned int.

1. `1-print_binary.c`: Contains `void print_binary(unsigned long int n)` function that prints the binary representation of a number.

2. `2-get_bit.c`: Contains `int get_bit(unsigned long int n, unsigned int index)` function that returns the value of a bit at a given index.

3. `3-set_bit.c`: Contains `int set_bit(unsigned long int *n, unsigned int index)` function that sets the value of a bit to 1 at a given index.

4. `4-clear_bit.c`: Contains `int clear_bit(unsigned long int *n, unsigned int index)` function that sets the value of a bit to 0 at a given index.

5. `5-flip_bits.c`: Contains `unsigned int flip_bits(unsigned long int n, unsigned long int m)` function that returns the number of bits you would need to flip to get from one number to another.

Each file contains a single function that solves a specific problem related to bit manipulation in C.

## Compilation

All files should be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

## Usage

Include the "main.h" header file in your C program to use these functions.