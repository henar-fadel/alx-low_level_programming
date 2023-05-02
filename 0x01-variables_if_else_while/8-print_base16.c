#include <stdio.h>
/**
 * main - entry point
 * discription: alphabet
 * Return: 0 success
 */
int main(void)
{
	int a = '0';

	while (a < 16)
	{
	putchar(a);
	a++;
	}
	putchar('\n');
	return (0);
}
