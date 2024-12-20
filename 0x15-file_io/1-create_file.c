#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, nwritten;
    mode_t mode = S_IRUSR | S_IWUSR;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        nwritten = write(fd, text_content, strlen(text_content));
        if (nwritten == -1)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
