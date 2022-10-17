#include <stdio.h>

/**
  * main - print combinations of three digits
  *
  * Description: print three-digit combinations
  *
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i, j, k;

	i = '0';
	j = '0';
	k = '0';

	while (i < ':')
	{
		j = i +	1;

		while (j < ':')
		{
			k = j + 1;

			while (k < ':')
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i < '7' || j < '8' || k < '9')
				{
					putchar(',');
					putchar(' ');
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
