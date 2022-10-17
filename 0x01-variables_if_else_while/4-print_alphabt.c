#include <stdio.h>

/**
  * main -print lowercase alphabet except q and e
  *
  * Description: print lowercase letters except q and e, followed by new line
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
