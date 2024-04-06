void times_table(void)
{
    int i, j, mul;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            mul = i * j;

            /* Print a comma and spaces after the first number*/
            if (j > 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if ((mul < 10))
            {
                _putchar(' '); /* Print an extra space for single-digit numbers*/
            }

            // Print the result
            _putchar((mul % 10) + '0');
        }
        _putchar('\n');
    }
}

