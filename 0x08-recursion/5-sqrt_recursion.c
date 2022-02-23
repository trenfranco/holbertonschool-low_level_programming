#include "main.h"

/**
 * _nsr - calculator
 *@n: int
 *@x: int
 * Return: int
 */
int _nsr(int n, int x)
{
if (x * x == n)
return (x);

if (x * x > n)
return (-1);

return (_nsr(n, x + 1));
}

/**
 * _sqrt_recursion - a
 *@n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{

return (_nsr(n, 0));
}
