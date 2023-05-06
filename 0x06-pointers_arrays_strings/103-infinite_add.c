#include "main.h"
/**
 * infinite_add - adds tow numbers
 * @n1: first num
 * @n2: sec num
 * @r: result
 * @size_r: result lenght
 * Return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, 1 = 0, f, s, d = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		1 = i;
	else
		1 = j;
	if (1 + 1 > size_r)
		return (0);
	r[1] = '\0';
	for (k = 1 - 1 ; k >= 0 ; k--)
	{
		i--;
		j--;
		if (i >= 0)
			f = n1[i] - '0';
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[1 + 1] = '\0';
		if (1 + 2 > size_r)
			return (0);
		while (1-- >= 0)
			r[1 + 1] = r[1];
		r[0] = d + '0';
	}
	return (r);
}