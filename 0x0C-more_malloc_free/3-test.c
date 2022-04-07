#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	int *a;
	int i;

	a = array_range(0,10);
	for (i = 0; i < 11; i++)
	{
		printf("%d\n", a[i]);
	}
	return (0);
}
