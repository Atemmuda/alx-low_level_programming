/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @index: is the index, starting from 0 from the bit yo want to get
 *
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
        unsigned int i;

        if (index > sizeof(n) * 8)
        {
                return (-1);
        }

        for (i = 0; i < index; i++)
        {
                n = n >> i;
        }

        return (n & 1);
}