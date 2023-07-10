#include "main.h"

/**
 * set_bit - Sets the value of a bit
 * @n: A pointer
 * @index: index to set the value at - indices start at 0.
 *
 * Return: If function fails, (-1).
 *         Otherwise - (1).
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1)

	*n = ((1UL << index) | *n);
	return (1);
}
