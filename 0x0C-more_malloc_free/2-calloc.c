#include "main.h"
#include <stdlib.h>
/**
 * _calloc - fgh
 * @nmemb: number of members
 * @size: fgh
 * Return: dfg
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;
	
	if (nmemb == 0 || size == 0)
		return (0);
	l = nmemb * size;
	p = malloc(l);
	
	if (p == 0)
		return (0);
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
