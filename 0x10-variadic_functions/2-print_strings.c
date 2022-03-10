#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings \n
 * @separator: separator
 * @n: number of strings passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *a;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		a = va_arg(list, char *);
		if (a == NULL)
			a = "(nil)";

		if (i == n - 1)
		{
			printf("%s", a);
			continue;
		}
		printf("%s%s", a, separator);
	}
	printf("\n");
}
