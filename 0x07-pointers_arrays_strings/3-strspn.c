/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer to sustring
 * @accept: pointer to string to check from
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, size;
	unsigned int count;

	i = 0;
	j = 0;
	size = 0;
	count = 0;

	for (j = 0; accept[j] != '\0'; j++)
		size++;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if (j == (size - 1) && s[i] != accept[j])
				return (count);
		}
		i++;
	}

	return (count);
}
