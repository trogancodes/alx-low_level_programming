#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 97; n++)
	{
	putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
	putchar(m);
	}
	putchar('\n');
	return (0);
}
