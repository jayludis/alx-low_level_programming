#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
        int i;

	while (s[counts] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev
	}
}	