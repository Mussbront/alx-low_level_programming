#include <stdio.h>

/**
  * main - print combinations of two digits
  *
  * Description: print all possible combinations of two digits
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int x, y;

	x = '0';

	y = '0';

	while (x < ':')
	{
		y = x + 1;

		while (y < ':')
		{
			putchar(x);
			putchar(y);

			if (x < '8' || y < '9')
			{
				putchar(',');
				putchar(' ');
			}

			y++;
		}

		x++;
	}
	putchar('\n');

	return (0);
}
