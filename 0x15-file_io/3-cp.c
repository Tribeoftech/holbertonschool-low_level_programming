#include "main.h"

/**
 * main - Copies the contents of one file to another non-existing file
 * @argc: Number of arguments passed
 * @argv: Array of passed arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int inputFd, outputFd;
	ssize_t numRead;
	char buf[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	inputFd = open(argv[1], O_RDONLY);
	if (inputFd == -1)
		{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	outputFd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (outputFd == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((numRead = read(inputFd, buf, 1024)) > 0)
	/* Only enters while loop if read is succesful, then goes to write */
	{
		if (write(outputFd, buf, numRead) != numRead)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	if (numRead == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (close(inputFd) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100); }
	if (close(outputFd) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100); }
	return (0);
}
