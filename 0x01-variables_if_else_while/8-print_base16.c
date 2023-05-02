#include <stdio.h>
/**
 * main - entry point
 * discription: alphabet
 * Return: 0 success
 */
int main(void)
{
	int a = 48;

	while (a <= 102)
	{
	if (a == 57)
	a += 39;
	a++;

	putchar(a);
	a++;
	}
	putchar('\n');
	return (0);
}
