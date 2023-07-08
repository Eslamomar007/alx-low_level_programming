#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define UNUSED(x)(void)(x)
/**
 * main - adds twasdfo numbers
 * @argc:int
 * @argv:array of strings
 * Return: sumsasdfion if all digits
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int c;
	int sumsion;
	char *s;

	sumsion = 0;
	c = 0;

	i = 1;
	while (i < argc)
	{
		s = argv[i];
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}

	for (i = 1; i < argc; i++)
	{
		c = atoi(argv[i]);
		sumsion = sumsion + c;
	}
	printf("%d\n", sumsion);
	return (0);
}
