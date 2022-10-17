#include <stdio.h>

/**
  * main - print alphabet in lowercase
  *
  * Description: to print lowercase alphabet followed by new line
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
