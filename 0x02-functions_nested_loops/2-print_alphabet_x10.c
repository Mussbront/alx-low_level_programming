#include "main.h"

/**
  * print_alphabet_x10 - print alphabet 10 times
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	int n = 0;

	char ch = 'a';

	while (n < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		n++;
	}
}
