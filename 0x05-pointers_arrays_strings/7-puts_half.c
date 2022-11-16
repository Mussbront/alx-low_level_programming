#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: string
  * Return: void
  */

void puts_half(char *str)
{
	int i, n, len;

	i = 0;
	len = 0;

	while (str[i++])
		len++;
	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (n = 0; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
