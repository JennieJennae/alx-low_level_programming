#include "main.h"
/**
 * This function prints a string character by character in recursive fashion till the string's conclusion.
 * it is alike with standard library function puts().
 *
 * @param str: The string that needs to be printed
 * @return: void
 */

void _puts_recursion(char *s)
{
	 // Confirm that the current character is not null
	if (*s)
	{
		//print the current character
		_putchar(*s);
		//recursively print function with the next character
		_puts_recursion(s + 1);
	}
	else
	{
		//print a new line character
		_putchar('\n');
	}
}
