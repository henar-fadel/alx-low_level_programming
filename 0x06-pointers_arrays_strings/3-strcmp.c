#include "main.h"
/**
 * _sctrcmp - compare
 * @s1: string 1
 * @s2: string 2
 * Return: 1 true, 0 false
 */
int _sctrcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
