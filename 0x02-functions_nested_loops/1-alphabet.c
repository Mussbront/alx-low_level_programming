#include "main.h"


/**
  * main - prints alphabet in lowercase
  *
  * Description: prints lowercase alphabet, followed by new line
  *
  * Return: Always 0
  */

int main(void)
{
	/**
	  *
	  * print_alphabet - program that prints alphabet in lowercase
	  *
	  * Description: Prints alphabet in lowercase followed by new line
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
