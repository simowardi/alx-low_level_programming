#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *			to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: text file
 * Return: actual number of letters it could read and print
 *		if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ff;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	ff = open(filename. O_RDONLY);
	if (ff == -1)
		return (0);
	bytes = read(ff, &buf[0], letters);
	bytes = write(STDOUT_FILEEND, &buf[0], bytes);
	close(ff);
	return (bytes);
}
