#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz- function
 *
 * Description: function that can print numbers from 0 to 9
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}			
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
