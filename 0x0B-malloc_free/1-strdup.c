#include "main.h"
#include <stdlib.h>
/**
 * _strdup - fgh
 * @str: sdf
 * Return: dfgh
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == 0)
		return (0);
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == 0)
		return (0);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}	
