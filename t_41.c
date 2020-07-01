#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int table1[100], table2[100];
	srand(time(0));
	
	printf("Random generated table:\n");
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			table1[i * 10 + j] = rand() % 100;
			printf("%02d  ", table1[i * 10 + j]);
		}
		printf("\n");
	}

	printf("\nFlipped version of the table:\n");
	for (int k = 0; k < 10; ++k)
	{
		for (int n = 0; n < 10; ++n)
		{
			table2[k * 10 + n] = table1[(9 - k) * 10 + (9 - n)];
			printf("%02d  ", table2[(k * 10 + n)]);
		}
		printf("\n");
	}
	
	return 0;
}
