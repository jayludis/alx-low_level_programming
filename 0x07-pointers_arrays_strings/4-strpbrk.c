include "main.h"

/**
 * _strpbrk - Searches for any of a set of bytes.
 * @s: The string to be searched for.
 *
 * Return: if a set is matched - a pointer to the matched byte
 If no set is matched - NULL.
 */
char *strpbrk(char *s, char *accept)
{
	int index;
	
	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
