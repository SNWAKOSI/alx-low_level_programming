#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: parameters to check
 *
 * Return: returns must be 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
