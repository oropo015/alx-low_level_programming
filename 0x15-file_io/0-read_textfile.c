#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - A function to read and print text file to POSIX stdout
 * @filename: name of the file source
 * @letters: number
 *
 * Return: number of letters that can be read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_len, write_len;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_len = read(fd, buffer, letters);
	close(fd);
	if (read_len == -1)
	{
		free(buffer);
		return (0);
	}
	write_len = write(STDOUT_FILENO, buffer, read_len);
	free(buffer);
	if (read_len != write_len)
		return (0);
	return (write_len);
}
