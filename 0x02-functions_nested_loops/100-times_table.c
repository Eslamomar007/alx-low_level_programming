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
				printf("%d",input)
			
				if (i != 99)
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
				if (i != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			else
			{
				if (i != 0)
				{
					printf("  ");
				}
				_putchar(input + '');
				if (i != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
