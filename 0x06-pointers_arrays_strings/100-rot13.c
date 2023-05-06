#include "main.h"
/**
 * rot13 - encodes astring
 * @s: input astring
 * Return: encoded a string
 */
char *rot13(char *)

{
	int i;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
					break;
			}
		}
		s++;
	}
	return (ptr);
}
