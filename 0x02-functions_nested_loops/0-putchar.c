#include "main.h"

/**
* main - Entry point
*
* Description: a function that uses Write
* to print chars
*
* Return: 0
*/

int main(void)
{
	char str[] = "_putchar";

	char i = 0;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
