#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: 0
 */
int main(void)
{
int x;
int y;
int z;
int t = 0;

while (t < 10)
{
	z = 0;
	while (z < 10)
	{
		y = 0;
		while (y < 10)
		{
			x = 0;
			while (x < 10)
			{
				if (!(t == x && z == y))
				{
					putchar('0' + t);
					putchar('0' + z);
					putchar(' ');
					putchar('0' + y);
					putchar('0' + x);
					if (!(t + z == 18 && x + y == 17 && y == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				x++;
			}
			y++;
		}
		z++;
	}
	t++;
}
putchar('\n');
return (0);
}
