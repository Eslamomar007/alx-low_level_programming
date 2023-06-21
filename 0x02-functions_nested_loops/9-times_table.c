#include <stdio.h>
#include "main.h"
/**
*      	times_table - prints "Programming is ing new line with puts"
*
*	Return: Always1
*/

void times_table(void)
{
	int x;
	int i;
	int input;
	int f;
	int sec;

	for(x = 0; x <= 9; x++)
		{
			for ( i = 0; i <= 9 ; i++)
			{	
		
			
			
			input = i * x;
			if (input > 9)
			{
				sec = input % 10;

				f = (input - sec)/10;
	                       _putchar(f + '0');
			       _putchar(sec + '0');
			     	 if (x != 9 )
					  _putchar(44);
			       _putchar(32);
			}

			else
			{
			_putchar(' ');	
			_putchar(input + '0');
			if( x != 9)
				_putchar(44);
			_putchar(32);
			}
		}
		_putchar('\n');
		}
	

}
