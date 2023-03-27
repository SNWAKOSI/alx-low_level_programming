#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: a pointer whose length is to be measured
 *
 * Return: the length of the string as an integer
 */

int _strlen(char *s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
