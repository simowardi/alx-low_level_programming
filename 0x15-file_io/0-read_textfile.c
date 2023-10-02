#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nmrd, numwr;
	char *bufer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bufer = malloc(sizeof(char) * (letters));
	if (!bufer)
		return (0);

	numrd = read(fd, bufer, letters);
	numwr = write(STDOUT_FILENO, bufer, numrd);

	close(fd);

	free(bufer);

	return (nmwr);
}
