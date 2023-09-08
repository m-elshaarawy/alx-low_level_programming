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
	int ch2 = 0 + '0';
	int ch3 = 0 + '0';
	int ch4 = 0 + '1';
	int i = 1;

	while (i <= 100)
	{

		putchar(ch);
		putchar(ch2);
		putchar(' ');
		putchar(ch3);
		putchar(ch4);

		if (ch2 != '8' && ch != '9')
		{
			putchar(',');
			putchar(' ');
			
		}
		else
		{
			break;
		}
		ch4++;
		if (ch4 == 58)
		{
			ch3++;
			ch4 = 0 + '0';
			if (ch3 == 58)
			{
				ch2++;
				ch4 = ch2 + '0';
				ch3 = 0 + '0';
				if (ch2 == 58)
				{
					ch++;
					ch2 = 0 + '0';
					ch4 = ch2 + '0';
					ch3 = ch + '0';

				}
			}
		}
		i++;
	}
	putchar('\n');

return (0);
}
