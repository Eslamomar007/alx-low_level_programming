#include <stdio.h>
#include "main.h"
/**
* print_times_table - prints"Programming is ing new line with put"s
* @n: asdfsadf
* Return: Always1
*/

void print_times_table(int n)
{
	int x;
	int i;
	int input;

	if (n < 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (i = 0; i <= n ; i++)
			{
				input = i * x;
				if (input > 99)
				{
					if (i <= n)
					{
						printf(" ");
					}
					printf("%d", input);
					if (i != n)
					{
						printf(",");
					}
				}
				else if	(input > 9)
				{
					if (i <= n)
						printf("  ");
					printf("%d", input);		
					if (i != n)
					{
						printf(",");
					}
				}
				else
				{
					if (i != 0)
						printf("   ");			
					printf("%d", input);
					if (i != n)
					{
						printf(",");
					}
				}
			}
		printf("\n");
		}
	}
}
