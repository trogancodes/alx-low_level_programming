#include "main.h"
#include <stdlib.h>
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - etui
 * @str: sdfghj
 * Return: sdfghkl;
 */
int word_len(char *str)
{
	int index = 0, len = 0;
	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * count_words - fghjk
 * @str: msdfghjk
 * Return: sdfghj
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;
	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
