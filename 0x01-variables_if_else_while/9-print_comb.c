#include <stdio.h>

/**
  * main - print all possible combinations of single-digit numbers
  *
  * Description: print combinations of single-digit numbers
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	i = '0';

	while (i < ':')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}

	putchar('\n');

	return (0);
}
