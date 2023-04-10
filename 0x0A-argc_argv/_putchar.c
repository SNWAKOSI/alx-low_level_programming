#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes c as a character to stdout
 * @c: parameters to print
 *
 * Return: prints 1 if successful
 * On error, -1 is returned and erro is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
