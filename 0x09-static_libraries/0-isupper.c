#include "main.h"

/**
 * _isupper - uppercase letters only
 * @c: char to check parameters
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}