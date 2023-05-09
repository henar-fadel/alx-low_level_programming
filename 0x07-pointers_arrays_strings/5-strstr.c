#include "main.h"
/**
 * _strstr - locates a substring
 * @needle: the substring
 * @haystack: string
 * Return: the substring located .null
 */
char *_strstr(char *haystack, char *needle)
{
	int in;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		in = 0;

		if (haystack[in] == needle[in])
		{
			do {
				if (needle[in + 1] == '\0')
					return (haystack);
				in++;
			} while (haystack[in] == needle[in]);
		}
		haystack++;
	}
	return ('\0');
}

