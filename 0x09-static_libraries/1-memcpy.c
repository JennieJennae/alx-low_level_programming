#include "main.h"
/**
 *_memcpy - a function which copies memory space
 *@dest: stored memory
 *@src: copied memory
 *@n: bytes number
 *
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
