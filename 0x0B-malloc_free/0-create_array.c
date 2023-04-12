#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of certain size and assign a char c
 * @size: array size
 * @c: char to be assigned
 * Description: create array of certain size and a assign char c
 * Return: return pointer to array and NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
