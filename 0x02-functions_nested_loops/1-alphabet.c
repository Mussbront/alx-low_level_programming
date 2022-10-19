#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
  * main - prints lowercase alphabet
  *
  * print_alphabet - program that prints lowercase alphabet
  *
  * Return: void
  */

int main(void)
{
	void print_alphabet(void)
	{
		char ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)

			_putchar(ch);

		_putchar('\n');
	}

	return (0);
}
