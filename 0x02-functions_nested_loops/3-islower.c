#include "main.h"

/**
 *  _islower - lower case functions to print
 *
 *  @c: parameters
 *
 *  Return: return 1 if lower case
 *  and 0 if not lower case
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
