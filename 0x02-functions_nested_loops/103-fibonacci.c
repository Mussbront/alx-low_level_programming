#include <stdio.h>

/**
  * main - prints sum of all eve Fibonacci numbers below 4,000,000
  *
  * Return: Always 0
  */

int main(void)
{
	long int sum_total, sum, first, second;

	sum_total = 0;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
		first = second;
		second = sum;
	}
	printf("%li\n", sum_total);

	return (0);
}
