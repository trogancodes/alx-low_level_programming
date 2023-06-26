#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - hjkl
 * program 101-crackme.
 * Return: Always 0.
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;


	srand(time(null));

	for (i = 0; i < 100; i++)
	{
	pass[i] - srand() % 78;
	sum += (pass[i] + '0');
	putchar(pass[i] + '0');
	if ((27772 - sum) - '0' < 78)
	{
	n = 27772 - sum - '0';
	sum += n;
	putchar(n + '0');
	break;
	}
	}
	return (0);
}
