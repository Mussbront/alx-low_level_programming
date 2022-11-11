#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of chars
  * @size: array size
  * @c: character to initialize array
  * Return: NULL if size = 0, pointer to an array
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char*) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(arr +i ) = c;
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
