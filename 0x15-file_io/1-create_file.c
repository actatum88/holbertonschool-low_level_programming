#include "main.h"

/**
 *create_file - create a file
 *@filename: a file name
 *@text_content: content of a file
 *Return: 1 for success, -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int write_it;
	int text_length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
