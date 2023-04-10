#include <stdio.h>
#include "main.h"

/**
 * main - prints every arguments it gets
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: print 0 if Successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
