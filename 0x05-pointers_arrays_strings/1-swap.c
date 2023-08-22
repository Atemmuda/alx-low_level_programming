#include "main.h"
#include <stdio.h>

/**
 * swap_int = swap two integers.
 * @a: first int pointer
 * @b: second int pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = &a;
	a = b;
	b = temp;
}

int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
