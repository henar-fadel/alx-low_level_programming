#include "main.h"
/**
 * *_strchr - fills memory
 * @s: pointer
 * @c: constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int asd;

	for (asd = 0; s[asd] >= '\0' ; asd++)
	{
		if (s[asd] == c)
		{
			return (s + asd);
		}
	}
	return ('\0');
}
