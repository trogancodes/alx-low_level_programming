#include "main.h"
/**
 * puts_half - cjkel
 * @str: nmkl;
 * Return: void
 */
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j -1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}
	for (k = 0; k < j; k++)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
