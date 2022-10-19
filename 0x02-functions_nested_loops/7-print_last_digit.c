#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: n is an integer
  *
  * Return: integer
  */

int print_last_digit(int n)
{
	int lx = n % 10;

	if (n < 0)
		lx = lx * -1;

	_putchar(lx + '0');

	return (lx);
}
