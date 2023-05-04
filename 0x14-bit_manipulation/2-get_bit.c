#include "main.h"

/**
 * get_bit - returns the parameter of a bit of an index in a decimal number
 * @n: parameter to search
 * @index: index of the bit
 *
 * Return: bit parameter
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
