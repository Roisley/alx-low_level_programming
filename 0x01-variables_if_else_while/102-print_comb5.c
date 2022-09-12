#include <stdio.h>

/**
 * main - entry
 * Description: prints all possible combinations of two two-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int k, l;

	for (l = 0; l <= 98; l++)
	{
		for (k = l + 1; k <= 99; k++)
		{
			putchar((l / 10) + '0');
			putchar((l % 10) + '0');
			putchar(' ');
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			if (k == 98 && l == 99)
				putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
