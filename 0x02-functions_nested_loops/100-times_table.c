#include <stdio.h>
#include "main.h"
/**
* print_times_table - prints"Programming is ing new line with puts"
* @n 
* Return: Always1
*/

void print_times_table(int n)
{
	int x;
	int i;
	int input;

	for (x = 0; x <= n; x++)
	{
		for (i = 0; i <= n ; i++)
		{
			input = i * x;
			if (input > 99)
			{
				printf("%d", input);
				if (i != n)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			if (input > 9)
			{
				if (i != 0)
                       	        {
		       		       printf("  ");
	       	                }
				printf("%d", input);		
				if (i != n)
				{
					printf(",");
					printf("  ");
				}
			}
			else
			{
				/**
				if (i != 0)
				{
					printf("  ");
				}*/
				printf("%d", input);
				if (i != n)
				{
					printf(",");
					printf("   ");
				}
			}
		}
		_putchar('\n');
	}
}
