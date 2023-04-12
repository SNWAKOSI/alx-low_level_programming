#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The parameter to print
 *
 * Return: must return 1 if successful
 * On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
