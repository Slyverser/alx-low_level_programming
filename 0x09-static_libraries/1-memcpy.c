#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: The destination memory where data is copied
 * @src: the source memory from which data is copied
 * @n: The number of bytes to copy.
 *
 * Return : A pointer to the 'dest' memory where the copied data is stored.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

