#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints
 * @n: The number to start printing from
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (n = 0; n <= 98; n++ )
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (n = 0; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}
