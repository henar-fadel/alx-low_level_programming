#include "main.h"
/**
 * *_memcpy - copy memory
 * @dest: memory area
 * @src: source
 * @n: length
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int oah;

	for (oah = 0; oah < n; oah++)
	{
		dest[oah] = src[oah];
	}
	return (dest);
}
