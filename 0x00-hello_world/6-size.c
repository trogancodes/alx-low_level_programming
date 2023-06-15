#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:0(Success)
 */
int main(void)
{
	printf("Size of a char %d byte(s)n", sizeof(char));
	printf("Size of an int %d byte(s)n", sizeof(int));
	printf("Size of a long int %d byte(s)", sizeof(long int));
	printf("Size of long long int %d byte(s)", sizeof(long long int));
	printf("Size of flot %d byte(s)", sizeof(float));
	return (0);
}
