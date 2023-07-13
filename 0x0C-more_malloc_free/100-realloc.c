#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - fgh
 * @ptr:
 * @old_size:
 * @new_size:
 * Return: f
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;
	if (new_size == old_size)
		return (ptr);
	if (ptr == 0)
	{
		nptr = malloc(new_size);
		if (nptr == 0)
			return (0);
		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (0);
		}
	}
	nptr = malloc(new_size);
	if (nptr == 0)
		return (0);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (nptr);
}
