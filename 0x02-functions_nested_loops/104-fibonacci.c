#include <stdio.h>

/**
  * main - prints first 98 fibonacci numbers starting with 1 and 2
  *
  * Return: Always 0
  */

int main(void)
{
	unsigned long int i, y, z, y1, y2, z1, z2;

	y = 1;
	z = 2;

	printf("%lu", y);


	for (i = 1; i < 91; i++)
	{
		printf(", %lu", z);

		z  = z + y;
		y = z - y;
	}

	y1 = y / 1000000000;
	y2 = y % 1000000000;
	z1 = z / 1000000000;
	z2 = z % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", z1 + (z2 / 1000000000));
		printf("%lu", z2 % 1000000000);
		z1 = z1 + y1;
		y1 = z1 - y1;
		z2 = z2 + y2;
		y2 = z2 - y2;

	}

	printf("\n");

	return (0);
}
