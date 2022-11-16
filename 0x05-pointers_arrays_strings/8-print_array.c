#include "main.h"
#include <stdio.h>
/**
  * print_array - prints n elements of an array
  * @a: array of integers
  * @n: number of elements to print
  * Return: void
  */

void print_array(int *a, int n)
{
	int count;

	if (n > 0)
	for (count = 0; count < n; count++)
	{
		printf("%d,", a[count]);
		if (count < n - 1)
			printf(", ");
	}
	printf("\n");
}
