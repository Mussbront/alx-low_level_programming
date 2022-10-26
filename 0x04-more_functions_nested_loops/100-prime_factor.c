#include <stdio.h>

/**
  * main - prints the largest prime factor of the number 612852475143
  *@n is quotient
  *@i is divisor
  * Return: Always 0
  */

int main(void)
{
	long int n = 612852475143;
	long int i = 2;

	while (n != i)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
		{
			i++;
		}
	}
	printf("%li\n", n);

	return (0);
}
