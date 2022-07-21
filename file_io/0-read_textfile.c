#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * Description: reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: letters to print
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *f;

	if (!filename)
		return (0);
	f = malloc(letters);
	if (!f)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(f);
		return (0);
	}
	r = read(fd, f, letters);
	w = write(STDOUT_FILENO, f, r);
	free(f);
	close(fd);
	if (r != w || r == -1 || w == -1)
		return (0);
	return (r);
}
