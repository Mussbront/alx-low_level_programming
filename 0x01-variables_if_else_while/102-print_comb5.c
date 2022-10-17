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
	int i, j, k, m;

	i = '0';
	while (i < ':')
	{
		j = '0';
		while (j < ':')
		{
			m = j +	1;
			k = i;
			while (k < ':')
			{
				while (m < ':')
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if (i < '9' || j < '8' || k < '9' || m < '9')
					{
						putchar(',');
						putchar(' ');
					}
					m++;
				}
				m = '0';
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
