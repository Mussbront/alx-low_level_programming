#include "main.h"

/**
  * print_triangle - function that  prints a triangle
  * @size: size of the triangle
  * Return: void
  */

void print_triangle(int size)
{
	int ln = 0;
	int sp;
	int h;

	if (size > 0)
	{
		while (ln < size)
		{
			for (sp = size - 1; sp > ln; > sp--)
			{
				_putchar(' ');
			}
			for (h = 0; h < ln + 1; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
			ln++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
