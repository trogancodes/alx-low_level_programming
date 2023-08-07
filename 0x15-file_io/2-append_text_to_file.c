#include "main.h"
/**
 * append_text_to_file - Appends the  text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add at the end of a file.
 * Return: If the function fails or filename is NULL - -1 and if the file does not exist the user lacks write permissions - -1 else  - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == 0)
		return (-1);
	if (text_content != 0)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
