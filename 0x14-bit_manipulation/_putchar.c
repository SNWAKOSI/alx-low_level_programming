#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: The parameter to print
 *
 * Return: if successful return 1.
 * On error, return -1, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
