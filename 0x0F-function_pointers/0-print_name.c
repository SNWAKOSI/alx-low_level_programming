#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name with means of pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: null
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
