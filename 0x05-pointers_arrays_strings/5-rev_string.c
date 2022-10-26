#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: string to be reserved
  * Return: void
  */

void rev_string(char *s)
{
	int a, max, half;
	char first, last;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	max = a - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
