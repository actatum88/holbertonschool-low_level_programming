#include "main.h"

/**
 *create_file - create a file
 *@filename: a file name
 *@text_content: content of a file
 *Return: 1 for success, -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fw, l;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	for (l = 0; text_content[l] != '\0'; l++)
	;
	fw = write(fd, text_content, l);
	close(fd);
	if (fw < 0)
		return (-1);
	return (1);
}
