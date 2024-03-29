#include "main.h"

/**
 * wildcmp - compares two strings, accounting for wildcard characters
 * @s1: input string 1
 * @s2: input string 2, can contain wildcards
 *
 * Return: 1 if strings are identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (stringcmp(s1, s2, 0));
}

/**
 * stringcmp - function to compare two strings
 * @s1: input string s1
 * @s2: input string s2
 * @checker: checker to determine if wildcard has been seen
 *
 * Return: 1 if match, 0 if don't
 */
int stringcmp(char *s1, char *s2, int checker)
{
	int moves;

	if (s2[0] == '*')
	{
		checker++;
		s2 = wilds2(s2);
		s1 = wilds1(s1, s2[0]);
		return (stringcmp(s1, s2, checker));
	}
	else if (s1[0] != s2[0])
	{
		if (checker > 0)
		{
			moves = checkwd(s2, 0);
			s1 -= moves;
			s1 += 2;
			if (s1[0] == '\0' || s1[-1] == '\0')
			{
				return (0);
			}
			s2 -= moves;
			return (stringcmp(s1, s2, checker));
		}
		else
		{
			return (0);
		}
	}
	else if (s1[0] == '\0' && s2[0] == '\0')
	{
		return (1);
	}
	else
	{
		s1++;
		s2++;
		return (stringcmp(s1, s2, checker));
	}
	return (0);
}

/**
 * wilds2 - function to handle wildcards in string 2
 * @s2: input string s2
 *
 * Return: start of next character of s2
 */
char *wilds2(char *s2)
{
	if (s2[0] != '*')
	{
		return (s2);
	}
	else
	{
		s2++;
		return (wilds2(s2));
	}
	return (0);
}
/**
 * wilds1 - function to move s1 to account for wildcards in string 2
 * @s1: input string s1
 * @next: input of what next character of s2 is
 *
 * Return: start of next character of s1
 */
char *wilds1(char *s1, char next)
{
	if (s1[0] == next)
	{
		return (s1);
	}
	else if (s1[0] == '\0')
	{
		return (s1);
	}
	else
	{
		s1++;
		return (wilds1(s1, next));
	}
	return (0);
}
/**
 * checkwd - function to check if s2 has seen a wildcard before non-match
 * @s2: input string s2
 * @count: count of how many matching places to get back to wildcard
 *
 * Return: 0 if no wildcards previously and 1 if has seen wildcard
 */
int checkwd(char *s2, int count)
{
	if (s2[0] == '*')
	{
		return (count);
	}
	else
	{
		count++;
		s2--;
		return (checkwd(s2, count));
	}
	return (0);
}
