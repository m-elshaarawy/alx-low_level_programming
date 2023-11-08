#include "function_pointers.h"

/**
 * print_name -  prints a name.
 * @name: text
 * @f: pointer to function
 * Description: N/A
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
