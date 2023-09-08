#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that
 *  prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */

int main(void)
{
	char ch = 0;

	while (ch < 10)
	{
		printf("%d", ch);
		ch++;
	}
	putchar('\n');

return (0);
}
