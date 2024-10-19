# C File I/O Operations

This project contains several C programs that demonstrate file input/output operations. Below are the tasks included in this project:

## Task 0: Read Text File

Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
- Returns the actual number of letters it could read and print
- If the file cannot be opened or read, return 0
- If `filename` is NULL, return 0
- If `write` fails or does not write the expected amount of bytes, return 0

## Task 1: Create a File

Create a function that creates a file.

- Prototype: `int create_file(const char *filename, char *text_content);`
- Returns: 1 on success, -1 on failure
- The created file must have those permissions: rw-------
- If the file already exists, do not change the permissions
- If the file already exists, truncate it
- If `filename` is NULL, return -1
- If `text_content` is NULL, create an empty file

## Task 2: Append Text to File

Write a function that appends text at the end of a file.

- Prototype: `int append_text_to_file(const char *filename, char *text_content);`
- Return: 1 on success and -1 on failure
- Do not create the file if it does not exist
- If `filename` is NULL, return -1
- If `text_content` is NULL, do not add anything to the file
- Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file

## Task 3: cp

Write a program that copies the content of a file to another file.

- Usage: `cp file_from file_to`
- If the number of arguments is not correct, exit with code 97 and print a usage message
- If `file_to` already exists, truncate it
- If `file_from` does not exist, or if you cannot read it, exit with code 98 and print an error message
- If you cannot create or write to `file_to`, exit with code 99 and print an error message
- If you cannot close a file descriptor, exit with code 100 and print an error message
- Permissions of the created file: rw-rw-r--
- Read 1,024 bytes at a time from `file_from` to make less system calls
- You are allowed to use `dprintf`

For detailed instructions and example usage for each task, please refer to the individual source files in this repository.