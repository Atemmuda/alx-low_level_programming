#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * if 'a' is negative the it returns it positive value
 * otherwise it returns 'a'
 * @a: The parameter to work on
 *
 * Return: absolut int of 'a'.
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}
