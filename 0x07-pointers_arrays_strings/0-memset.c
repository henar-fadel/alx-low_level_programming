#include "main.h"
/**
 * *_memset - fills memory
 * @s: pointset
 * @b: constant
 * @n: maximam bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mat;

	for (mat = 0; n > 0; mat++, n--)
	{
		s[mat] = b;
	}
	return (s);
}
