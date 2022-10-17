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
	int i, j;

	i = '0';

	j = '0';

	while (i < ':')
	{
		j = i + 1;

		while (j < ':')
		{
			putchar(i);
			putchar(j);

			if (i < '8' || j < '9')
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}

		i++;
	}
	putchar('\n');

	return (0);
}
