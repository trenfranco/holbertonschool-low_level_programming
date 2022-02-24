#include "main.h"

/**
 * calc - check the code
 *@n: int
 *@x: int
 * Return: Always 0.
 */
int calc(int n, int x)
{
if (n <= 1)
return (0);

if (n == x && n % x == 0)
return (1);

if (n % x == 0)
return (0);

return (calc(n, x + 1));
}

/**
 * is_prime_number - check the code
 *@n: int
 * Return: Always 0.
 */

int is_prime_number(int n)
{
return (calc(n, 2));
}
