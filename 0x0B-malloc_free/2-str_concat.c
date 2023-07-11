#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - dfghj
 * @s1: sdfg
 * @s2: sdfg
 * Return: dfg
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;
	
	if (s1 == 0)
		s1 = "";
	if (s2 == 0 )
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	s = malloc((sizeof(char) * l) + 1);
	if (s == 0)
		return (0);
	j = 0;
	while (k <= l)
	{
		if (k < l)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
