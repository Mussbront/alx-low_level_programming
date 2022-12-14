#include "main.h"
#include <stdio.h>

/**
  * main - Print numbers 1-100 replacing multiples of 3 and 5 with
  *fizz and buzz
  * Return: Always 0
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
