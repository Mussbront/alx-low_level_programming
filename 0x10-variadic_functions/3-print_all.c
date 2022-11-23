#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * print_char - prints char
  * @args: list of arguments
  */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
  * print_int - prints integers
  * @args: list of arguments
  */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
  * print_float - prints float
  * @args: list of arguments
  */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
  * print_string - prints string
  * @args: list of arguments
  */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
  * print_all - prints anything
  * @format: list of types of arguments
  */

void print_all(const char * const format, ...)
{
	va_list args;
	int a, b;
	char *s1 = "";
	char *s2 = ", ";

	op_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		b = 0;
		while (ops[b].c != '\0')
		{
			if (ops[b].c == format[a])
			{
				printf("%s", s1);
				ops[b].f(args);
				s1 = s2;
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(args);
}
