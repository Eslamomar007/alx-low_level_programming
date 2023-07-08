#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int num1, num2, results = 0;

	argv++;
	while (*argv)
	{
		if (isdigit(*argv))
		{
			results = results + atoi(*argv);
			argv = argv + 1;
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
        printf("%d\n", results);
	return (0);

}
