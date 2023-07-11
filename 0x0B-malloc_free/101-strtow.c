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
/**
 * strow - hj
 * @str:  bn
 * Return: hj
 */
char **strow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == 0 || str[0] == '\0')
		return (0);
	words = count_words(str);
	if (words == 0)
		return (0);
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == 0)
		return (0);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (strings[w] == 0)
		{
			for (w = 0; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (0);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}
	strings[w] = 0;
	return (strings);
}
