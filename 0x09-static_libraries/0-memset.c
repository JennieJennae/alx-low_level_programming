#include "main.h"
/**
 * _memset -block of memory with specific value
 * @s: starting address of memory
 * @b: desired value
 * @n: bytes number
 *
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
