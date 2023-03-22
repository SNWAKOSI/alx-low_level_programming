#include "main.h"
#include <stdio.h>

/**
 * print_sign - function that prints 1
 *
 * @n: function pre-requisite
 *
 * Return: must return 1, 0 and -a
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf('+');
		return (1);
	}
	else if (n == 0)
	{
		printf('0');
		return (0);
	}
	else
	{
		printf('-');
		return (-1);
	}
}
