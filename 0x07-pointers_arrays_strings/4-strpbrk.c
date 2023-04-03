#include "main.h"

/**
 * _strpbrk - point of entry
 * @s: input data
 * @accept: input data
 * Return: Return must be 0 for Success
 */

char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
