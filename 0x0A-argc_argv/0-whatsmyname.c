#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: arguments name
 * @argv: arguments in arrays
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
