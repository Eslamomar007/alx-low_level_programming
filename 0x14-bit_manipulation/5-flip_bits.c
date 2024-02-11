/**
 * flip_bits - gets the nsadffdsaumber of bits flipped form n to m
 * @n: initial lu intasfd
 * @m: secondary lu intasdf
 *
 * Return: number of bits need toasdf flip to get from `n to `m`
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int si;
	unsigned long int flipp;
	unsigned long int i;

	si = sizeof(n) * 8 - 1;

	flipp = 0;
	i = 0;

	while (i <= si)
	{
		if ((n & 1) != (m & 1))
			flipp++;

		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (flipp);
}
