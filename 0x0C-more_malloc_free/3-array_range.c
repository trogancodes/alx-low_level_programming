#include "main.h"
#include <stdlib.h>
/**
 * array_range - ghj
 * @min: xxcfd
 * @max:bubdc
 * Return: Integer value
 */
int *array_range(int min, int max)
{
	int *a, i = 0;
	if (min > max)
		return (0);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == 0)
		return (0);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
