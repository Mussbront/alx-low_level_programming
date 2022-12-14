#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Establish whether number is positive or negative
  *
  * Description: program will assign random number to variable n and determine
  * if negative or positive when executed
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
