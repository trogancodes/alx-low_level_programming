#include <unistd.h>
/**
 * _putchar - vbnm,
 * @c: The character to print
 * Return: on success 1.
 * On error, -1 and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
