 #include "mian.h"

/**
 * puts2 - Write a function that prints every other character of a string, 
 *         starting with the first character, followed by a new line.
 *
 * @s: This pointer point to a char or string
 *
 *
 */

void puts2(char *s)
{
	int aa;

	for (aa = 0; s[aa] != '\0'; aa++)
	{
		if (aa % 2 == 0)
		{
			_putchar(s[aa]);
		}
	}
	_putchar('\n');
}
