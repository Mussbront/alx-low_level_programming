#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: string that separates numbers
  * @n: number of integers passed
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d", num);
		}
		else
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d%s", num, separator);
		}
	}
	va_end(ap);
}
