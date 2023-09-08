#include <stdio.h>

/**
* main - Entry point
*
* Description: A C program that prints
* all single digit numbers of base 10 starting from 0
*
* Return: 0
*/

int main(void)
{
	int ch = 0;

	int num = 0;

	while (ch < 10)
	{
		num = ch + '0';
		putchar(num);
		ch++;
	}
	putchar('\n');

return (0);
}
