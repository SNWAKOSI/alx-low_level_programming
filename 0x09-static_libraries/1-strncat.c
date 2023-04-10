
#include "main.h"

/**
 * _strncat - join two strings
 * using max n bytes from src
 * @dest: input parameter
 * @src: input paremeter
 * @n: input parameter
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
