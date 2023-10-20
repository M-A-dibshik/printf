#include "main.h"

/**
 * _putchaar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 success
*/

int _putchaar(char c)
{
	return (write(1, &c, 1));
}
