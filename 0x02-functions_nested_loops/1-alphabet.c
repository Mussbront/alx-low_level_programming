#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
  * main - program that prints lowercase alphabet
  *
  * Return: 0 (Success)
  */

int main(void)
{
	/**
	  * print_alphabet - program that prints alphabet in lowercase
	  *
	  * Return: 0 (Success)
	 */

	void print_alphabet(void)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
