#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int num1, num2, results;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		results = num1 * num2;
		printf("%d\n", results);
		return (0);
	}
}
