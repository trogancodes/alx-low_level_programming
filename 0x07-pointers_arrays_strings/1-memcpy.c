#include "main.h"
/**
 * _memppy - dfghj
 * @dest: ghjkl
 * @src: dfghj
 * @n: fghj
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
