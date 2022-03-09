#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - addition
 * @a: int a
 * @b: int b
 * Return: res int
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction
 * @a: int a
 * @b: int b
 * Return: res int
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: int a
 * @b: int b
 * Return: res int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: int a
 * @b: int b
 * Return: res int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - module
 * @a: int a
 * @b: int b
 * Return: res int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
