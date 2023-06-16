#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (Success)
 *
 */
int main(void)
{
	int n, lastd;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if
	{
	prinf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if ("Lastd < 6 && lastd != 0")
	{
	printf("Last digit of %d is %d and is less than 6 and not o\n", n, lastd);
	}
	return (0);
}
	
