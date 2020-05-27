#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("N	10*N	100*N	1000*N\n\n");

	for (int i = 1; i < 11; ++i)
	{
		printf("%d	%d	%d	%d\n", i, 10 * i, 100 * i, 1000 * i);
	}

	return 0;
}