/**
 * print-binary - function that prints the binary representation of a number
 * @n: the number to be converted into binary
 *
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
        if (n > 1)
                print_binary(n >> 1);
        _putchar((n & 1) + '0');
}