
drsaffas
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x08-recursion/101-wildcmp.c
@drsaffas
drsaffas Recursions are really fun.
 1 contributor
30 lines (27 sloc)  425 Bytes
#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
return (*s2 == '\0');
}

if (*s2 == '*')
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
