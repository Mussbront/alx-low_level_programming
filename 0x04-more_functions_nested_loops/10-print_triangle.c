#include "main.h"

/**
  * print_triangle - function that  prints a triangle
  * @size: size of the triangle
  * Return: void
  */

void print_triangle(int size)
{
	int ln;
	int sp;
	int h;

	if (size <= 0)
	{
		for (ln = 0; ln <= (size - 1); ln++)
		{
			for (sp = 0; sp < (size - 1) - ln; sp++)
			{
				_putchar(' ');
			}
			for (h = 0; h <= ln; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
