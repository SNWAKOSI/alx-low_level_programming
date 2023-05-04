#include "main.h"

/**
ssssssssss * clear_bit - sets value of a given bit to 0
 * @n: pointer to the parameter to change
 * @index: index of the bit to be cleared
 *
 * Return: 1 if successful and -1 if a failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
