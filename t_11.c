#include <stdio.h>
#include <stdlib.h>

int main() {
	int num[10], max;
	printf("Anna 10 kokonaislukua:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d", 
		&num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);

	max = num[0];
	for (int i = 1; i < 9; ++i)
	{
		if (max<num[i])
		{
			max = num[i];
		}
	}
	printf("Suurin luku oli %d.\n", max);
	return 0;
}