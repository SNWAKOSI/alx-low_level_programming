#include "main.h"

/**
 * _strlen_recursion - Returns length of string.
 * @s: string parameters to be measured.
 *
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
