#include "main.h"

/**
  * print_line - prints a traight ine
  * @n: length of line
  * Return: void
  */

void print_line(int n)
{
	int line

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
