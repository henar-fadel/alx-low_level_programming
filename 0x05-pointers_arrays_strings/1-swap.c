#include "main.h"
/**
 * swap_int - swaps value
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	temp = *b;
	*b = temp;
}
