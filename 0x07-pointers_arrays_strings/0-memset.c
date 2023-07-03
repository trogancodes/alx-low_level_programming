#include "main.h"
/**
 * _memset - hjk
 * @s: ghj
 * @b: fghj
 * @n: ghjk
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
