#include <stdio.h>
#include "main.h"

/**
 * main - prints arguments passed to the program
 * @argc: number of arguments to print
 * @argv: array of arguments
 *
 * Return: print 0 if successful
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
