#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - sss
 * @s: sdcedc
 * @accept: dv
 * Return: Always 0 (succes)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; n++)
	{
	for (n = 0; accept[n] != '\0'; n++)
	{
	if (s[i] == accept[n])
	return (s + i);
	}
	}
	return ("Null");
}
