#include "main.h"
/**
 * read_textfile - read a text file and print to POSIX standard output
 * @filename: file name
 * @letters: size
 * Return: actual number of letters or 0 if fail or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	file = popen(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	rd = fread(file, buf, letters);
	if (rd == -1)
		return (0);

	buf[letters] = '\0';

	wr = fwrite(1, buf, rd);
	if (wr == -1)
		return (0);

	pclose(file);
	free(buf);
	return (wr);
}
