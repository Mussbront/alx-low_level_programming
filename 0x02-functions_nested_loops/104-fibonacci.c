#include <stdio.h>

/**
  * main - prints first 98 fibonacci numbers starting with 1 and 2
  *
  * Return: Always 0
  */

int main(void)
{
	unsigned long int x = 0, y = 1, s;
	int i;

	for (i = 1 i <= 98; i++)
	{
		s = x + y;

		if (i != 98)
		{
			pritnf("%lu, ", s);
		}
		else
		{
			printf("%lu\n", s);
		}

		x = y;
		y = s;
	}
	return (0);
}
