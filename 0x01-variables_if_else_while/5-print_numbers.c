#include <stdio.h>
#include <stdlib.h>

/**
  * main - print single digit numbers of base 10
  *
  * Description: Print single digit numbers of base 10 starting with 0 followed
  * by new line
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
	}
	i++;
	putchar('\n');
	return (0);
}
