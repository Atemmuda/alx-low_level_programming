#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two integers together
 * @a: first input integer
 * @b: second input integer
 *
 * Return: integer result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first input integer
 * @b: second input integer
 *
 * Return: integer result of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first input integer
 * @b: second input integer
 *
 * Return: integer result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: integer result of operarion
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	exit(100);
}

/**
 * op_mod - brings the remainder of a/b
 * @a: first number
 * @b: second number
 *
 * Return: integer result of operation
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	exit(100);
}
