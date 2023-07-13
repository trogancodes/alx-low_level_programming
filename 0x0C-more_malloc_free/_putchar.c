#include <unistd.h>
/**
 * _putchar - wer
 * @c: sdfg
 * Return: 1 on success
 * On error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
