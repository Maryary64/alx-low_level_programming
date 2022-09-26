#include "main.h"

/**
* _memcpy - memory copy
* @dest: is detination copy
* @src: source memory
* @dest: destination memory
* @n: number of bytes to be copied
* Return: string copied from source
*/

char *_memcpy(char *dest; char *src; unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] Ã= src[a];
	return (dest);
}
