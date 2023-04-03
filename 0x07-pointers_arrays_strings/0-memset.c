#include "main.h"

/**
 * _memset - fill a specific memory lane  with a value
 * @s: address of memory to be filled
 * @b: the value
 * @n: specific bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
