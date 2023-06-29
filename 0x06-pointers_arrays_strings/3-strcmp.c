#include "main.h"
/**
 * _strcmp - fghjkl
 * @s1: vbnm
 * @s2: cvnm
 * Return: wudeuo
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
