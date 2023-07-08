#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, coins;
	int sum = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = atoi(argv[1]);
	if (i >= 25)
	{
		coins = (i / 25);
		sum = coins + sum;
		i = i % 25;
	}
	if (i >= 10)
        {
		coins = (i / 10);
		sum = coins + sum;
		i = i % 10;
	}
	if (i >= 5)
	{
		coins = (i / 5);
		sum = coins + sum;
		i = i % 5;
	}
	if (i >= 2)
	{
		coins = (i / 2);
		sum = coins + sum;
		i = i % 2;
	}
	if (i == 1)
		sum++;
	printf("%d\n", sum);
	return (0);
}
