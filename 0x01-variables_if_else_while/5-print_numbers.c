#include <stdio.h>

/**
 * main - printing single digits
 *
 * Return: must always return 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
