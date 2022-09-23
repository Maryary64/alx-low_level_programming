#include "main.h"

/**
* *string_toupper - changes all lower case letter
*       of a string to uppercase.
* @s: source string.
* Return: an uppercase string
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		s[i] = toupper(s[i]);

		i++;
	}

	return (s);
}
