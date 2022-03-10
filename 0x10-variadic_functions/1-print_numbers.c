#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator char
 * @n: n of ints passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(list, int));
			continue;
		}
		printf("%d%s", va_arg(list, int), separator);
	}
	printf("\n");
	va_end(list);



}
