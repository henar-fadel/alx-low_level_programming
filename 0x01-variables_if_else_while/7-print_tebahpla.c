#include <stdio.h>
/**
 * main - entry point
 * discription: alphabet
 * Return: 0 success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar (c);
		c--;
	}
	putchar ('\n');
	return (0);
}
