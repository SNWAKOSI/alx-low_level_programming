#include <unistd.h>


/**
 * _putchar - writes c to stdout
 * @c: parameters to print to print
 *
 * Return: must return 1 after successful run
 * On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
