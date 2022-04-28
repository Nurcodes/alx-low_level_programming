#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts binary string to decimal value
 *
 * @b: char pointer containing the binary digits
 *
 * Return: decimal value or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int len = 0;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[len - i - 1] == '1')
		{
			n += 1 << i;
			printf("n is %d\n", n);
		}
		else if (b[len - i - 1] != '0')
		{
			return (0);
		}
	}

	return (n);

}
