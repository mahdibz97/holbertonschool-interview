#include "menger.h"

/**
 * menger - function that draws a 2D Menger
 * @level: the level of the Menger
 */

void menger(int level)
{
	long int i, j, a, b;

	if (level < 0)
		return;
	if (level == 0)
	{
		printf("#\n");
		return;
	}
	for (i = 1; level > 0; level--)
		i *= 3;
	for (j = 1; j <= i; j++)
	{
		for (b = 1; b <= i; b++)
		{
			for (a = 1; a <= i; a *= 3)
			{
				if (j % a * 3 <= a * 2 &&
					j % a * 3 >= a + 1 &&
					b % a * 3 <= a * 2 &&
					b % a * 3 >= a + 1)
				{
					printf(" ");
					break;
				}
			}
			if (a > i)
				printf("#");
		}
		printf("\n");
	}
}
