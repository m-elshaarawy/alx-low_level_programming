#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int ch = 0 + '0';
	int ch2 = 1 + '0';

	while (ch <= '8')
	{

		putchar(ch);
		putchar(ch2);

		if (ch != '8')
		{
			putchar(',');
			putchar(' ');
		}

		ch2++;

		if (ch2 == 58)
		{
			ch++;
			ch2 = ch + 1;
		}
	}
	putchar('\n');

return (0);
}
