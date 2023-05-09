#include "main.h"
/**
 * _strpbrk - search a string
 * @s: string
 * @accept: string
 * Return: pointer to the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int itr, htr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		htr = 0;
		while (accept[htr] != '\0')
		{
			if (accept[htr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			htr++;
		}
		itr++;
	}
	return (0);
}
