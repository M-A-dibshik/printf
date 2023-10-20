#include "main.h"

/**
 * _putts - ptint string
 * @c: string
 * Return: number of byte
*/

int _putts(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			put_char(c[count]);
		}
	}
	return (count);
}
