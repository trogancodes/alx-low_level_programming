#include "main.h"
/**
 * _puts_recursion - dfghjk
 * @s: dfgh
 * Return: Nothing
 */
vouid _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
