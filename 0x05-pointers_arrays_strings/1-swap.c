#include "main.h"
/**
 * swap_int - swap variable values
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
