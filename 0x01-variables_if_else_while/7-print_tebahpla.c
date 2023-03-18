#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: must always be 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
