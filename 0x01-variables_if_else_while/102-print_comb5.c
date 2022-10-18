#include <stdio.h>

/**
  * main - print pairs of two-digit comninations
  *
  * Description: print pairs of two-digit combinations from 0 to 99
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int a, b, c, d;

	a = '0';
	while (a < ':')
	{
		b = '0';
		while (b < ':')
		{
			d = b +	1;
		c = a;
			while (c < ':')
			{
				while (d < ':')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a < '9' || b < '8' || c < '9' || d < '9')
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				d = '0';
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
