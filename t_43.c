#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int printResults(int results[36000]);

int main() {
	int dice1, dice2, results[36000];
	srand(time(0));
	
	for (int i = 0; i < 36000; ++i)
	{
		dice1 = 1 + (rand() % 6);
		dice2 = 1 + (rand() % 6);
		results[i] = dice1 + dice2;
	}

	printResults(results);
	
	return 0;
}

int printResults(int results[36000]) {
	int sum[11] = {'0', '0','0','0','0','0','0','0','0','0','0'};
	for (int i = 0; i < 36000; ++i)
	{
		switch (results[i]) {
			case 2:
				++sum[0];
				break;
			case 3:
				++sum[1];
				break;
			case 4:
				++sum[2];
				break;
			case 5:
				++sum[3];
				break;
			case 6:
				++sum[4];
				break;
			case 7:
				++sum[5];
				break;
			case 8:
				++sum[6];
				break;
			case 9:
				++sum[7];
				break;
			case 10:
				++sum[8];
				break;
			case 11:
				++sum[9];
				break;
			case 12:
				++sum[10];
				break;
		}
	}

	printf("Sum 	Count\n");
	for (int i = 0; i < 11; ++i)
	{
		printf("%d 	%d\n", i + 2, sum[i]);
	}
}