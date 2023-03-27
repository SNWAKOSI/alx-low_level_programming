#include "main.h"

/**
 * swap_int - swaps values of two integers.
 *
 * @a: a pointer to the first integer to be swapped
 * @b: a pointer to the second integer to be swapped
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
