#include <stdio.h>
/**
 * main - entry point
 * discription: alphabet
 * Return: 0 success
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + 48);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);

}
