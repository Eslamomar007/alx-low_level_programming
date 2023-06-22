#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*      main - Prints "Programming is like building new line with puts"
*
*      Return: Always1
*/

int main(void)
{
	int third = 50;
	int second  = 49;
	int first = 48;
	int looping = 0;

	while (first < 58)
	{
		putchar(first);
		putchar(second);
		putchar(third);
		if (second == 57)
		{
			first += 1;
			second = first;	
			looping += 1;
		}
		if (looping == 9)
		{
			break;
		}
		if (third == 57)
		{
			second += 1;
			third = second;
					
		}







		putchar(44);
		putchar(32);
		third++;
	}
	putchar(10);
	return (0);
}
