#include "main.h"

/**
 * _strlen - finds length of string
 * @s: String
 * Return: length
 */

ssize_t _strlen(char *s)
{
	ssize_t x = 0;

	for (; s[x]; x++)
		;
	return (x);
}

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Our file's name
 * @letters: Number of letters it should read and print
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t write_Check = 0;
	ssize_t count = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(letters);
		if (buf == NULL)
			return (0);
	count = read(fd, buf, letters);
	write_Check = write(STDOUT_FILENO, buf, count);
	if (write_Check == -1)
		count = 0;
	free(buf);
	close(fd);
	return (count);
}
