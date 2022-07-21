#include "main.h"
/**
 * append_text_to_file - appends text
 * Description: appends text at the end of a line
 * @filename: name of file
 * @text_content: file content
 * Return: 1 on succes and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	for (i = 0; text_content && text_content[i]; i++)
	{
		if (write(fd, &text_content[i], 1) < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
