#include "main.h"
/**
 * get_bit - Gets the value of a bit any given index.
 * @n: bit
 * @index: index to get the value at
 *
 * Return: value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
