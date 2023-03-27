#include <main.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: a pointer to the string to be printed in reverse
 *
 * Return: no return statement as function prints output to stdout.
 */
void print_rev(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
