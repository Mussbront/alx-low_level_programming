#include "main.h"

/**
  * print_alphabet - program that prints lowercase alphabet
  *
  * Return: void
  */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)

		_putchar(ch);

	_putchar('\n');
}
