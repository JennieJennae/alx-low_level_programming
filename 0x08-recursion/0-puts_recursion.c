#include "main.h"
/**
 * _puts_recursion-same as function puts().
 *
 * @s: The string that needs to be printed
 * return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	else
	{
		_putchar('\n');
	}
}
