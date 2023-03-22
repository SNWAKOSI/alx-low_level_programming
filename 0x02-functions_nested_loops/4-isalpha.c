#include "main.h"
/**
 * _isalpha - function that checks for alphabet characters
 *
 * @c: critarias to be checked
 *
 * Return: Must return 1 if it is an alphabet
 * and 0 if not an alphabet
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
