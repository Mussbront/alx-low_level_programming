#include <stdio.h>

/**
  * main - print alphabet in lowercase and uppercase
  *
  * Description: print alphabet in lowercase and uppercase followed by new line
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char ch, CH;

	ch = 'a';
	CH = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
