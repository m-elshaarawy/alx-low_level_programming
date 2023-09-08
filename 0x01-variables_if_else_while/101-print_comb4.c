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
	int ch3 = 2 + '0';

	while (ch <= '7')
	{

		putchar(ch);
		putchar(ch2);
		putchar(ch3);

		if (ch != '7')
		{
			putchar(',');
			putchar(' ');
		}
		ch3++;
		if (ch3 == 58)
		{
			ch2++;
			ch3 = ch2 + 1;
			if (ch2 == '9')
			{
				ch++;
				ch2 = ch + 1;
				ch3 = ch2 + 1;
			}
		}
	}
	putchar('\n');

return (0);
}
