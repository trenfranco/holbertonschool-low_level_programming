#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: uint
 * Return: total sum as int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i = 0;
	va_list lista;

	if (n == 0)
		return (0);

	va_start(lista, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lista, int);
	}
	va_end(lista);
	return (sum);

}
