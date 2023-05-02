#include <stdio.h>
/**
 * main - entry point
 * discription: alphabet
 * Return: 0 success
 */
int main(void)
{
	char s, c;

	s = 'a';
	c = 'A';

	while (s <= 'z')
	{
		putchar (s);
		s++;
	}
	while (c <= 'Z')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
