#include "main.h"
#include <unistd>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return On success 1
 * 0n erroe, -1 is returned, add errno is set approprietly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
