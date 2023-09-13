#include "main.h"

/**
 * _islower - check for lowercase charater
 * @c: The character to be checked
 * Return ; 1 for lower charater or 0 forn anything else
 */

int _islower(int c)

{
	if(c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
