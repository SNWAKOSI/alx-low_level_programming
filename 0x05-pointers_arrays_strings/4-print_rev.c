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
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
