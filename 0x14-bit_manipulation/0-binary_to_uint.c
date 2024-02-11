/**
 * binary_to_uint - converasdft binary string to decimal
 * @b: binary stringasdf
 *
 * Return: decimal (unsiasdfgned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	unsigned int i;

	for (dec = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
			decimal <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (decimal);
}
