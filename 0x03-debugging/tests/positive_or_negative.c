#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry of the program
 * 
 * Program assigns a number to n and checks
 * if positive, negative or zero to print
 * the nassociated text
 * 
 * Return: zero(0) on success
*/

void positive_or_negative(int i)
{
    /** int n; 
    // srand(time(0));
    // i = rand() - RAND_MAX / 2;
    */
    if (i < 0)
        printf("%d is negative\n", i);

    else if (i == 0)
        printf("%d is zero\n", i);

    else
        printf("%d is positive\n", i);
}