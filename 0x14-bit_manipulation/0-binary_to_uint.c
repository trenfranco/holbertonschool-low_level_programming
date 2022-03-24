#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: number to conv
 * Return: conv number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 1, res = 0;
	int i = 0, cont = 0;

	if (b == NULL)
		return (0);
	for (cont = 0; b[cont] != '\0'; cont++)
	{
		if (b[cont] != '0' && b[cont] != '1')
			return (0);
	}
	num = 1;
	for (i = cont - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			res += num;
		num += num;
	}
	return (res);

}
