#include <stdio.h>

/**
  * main - Prints the name of file it was compiled from
  * Return: 0 (Always)
  */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
