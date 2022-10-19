#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
  * main - prints alphabet in lowercase
  *
  * Return: Always 0
  */

int main(void)
{
	/**
	  *
	  * print_alphabet - program that prints alphabet in lowercase
	  *
	  * Return: 0 (Success)
	  */

	void print_alphabet(void)
	{
		char ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}
