#include <stdio.h>


int checker(int base, int f);
int main()
{
	printf ("%d", checker(1, 4));
	return (1);

}
int checker(int base, int f)
{
	if (f == base  * base)
		return (base);
	if (f < base * base)
		return (-1);
	if (f > base * base)
		return (checker(base + 1, f));
}
