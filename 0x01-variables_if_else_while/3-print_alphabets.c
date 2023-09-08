#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that that prints
 *  the alphabet in lowercase, and in uppercase
 *
 * Return: 0
 */

int main(void)
{
	char ch = 97;
	char CH = 'A';

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

return (0);
}
