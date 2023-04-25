#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char a;
	int b;
	long int c;
	long long int d;
	float e;
        ptintf("Size of a char: %d byte(s), (unsigned long)sizeof (a));
        ptintf("Size of a int: %d byte(s), (unsigned long)sizeof (b));
        ptintf("Size of a long int: %d byte(s), (unsigned long)sizeof (c));
        ptintf("Size of a long long int: %d byte(s), (unsigned long)sizeof (d));
        ptintf("Size of a float: %d byte(s),(unsigned long)sizeof (e));
    return (0);
}

