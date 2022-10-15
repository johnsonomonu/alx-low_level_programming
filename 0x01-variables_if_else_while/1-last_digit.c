#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 }
 */

int main(void)

{

	int n, m;



	for (n = 48; n <= 56; n++)

	{

		for (m = 49; m <= 57; m++)

		{

			if (m > n)

			{

				putchar(n);

				putchar(m);

				if (n != 56 || m != 57)

				{

					putchar(',');

				}

			}

			  }

	}

	putchar('\n');

	return (0);

}
