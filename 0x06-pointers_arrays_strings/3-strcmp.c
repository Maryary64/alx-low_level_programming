#include "main.h"

/**
* _strcmp - Compares pointers to two strings
* @s1: Astring 1 input to compare
* @s2: against this other string 2
*
* Return: 0 if s1 and s2 are equal
* negative interger if the stopping character
*	in @s1 was less than the stopping xcharacter
*  in @s1 was greater than the stopping character
* in @s2
*/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
