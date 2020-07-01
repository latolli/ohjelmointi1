#include <stdio.h>

int printTable(int table[12]);
int maximum(int max, int maxi, int maxj);
int average(int sum);

int main() {
	int table[12], num, max = 0, maxi, maxj, sum = 0;

	printf("Enter 12 numbers in a range 0-100 to generate 4x3 table.\n");

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			while(1) {
				printf("%d. number:", (i * 4 + j + 1));
				scanf("%d", &num);

				if (num >= 0 && num <= 100) {
					table[i * 4 + j] = num;
					sum += table[i * 4 + j];
					if (num > max) {
						max = num;
						maxi = i;
						maxj = j;
					}
					break;
				}
			}
		}
	}

	printTable(table);
	maximum(max, maxi, maxj);
	average(sum);
	
	return 0;
}

int printTable(int table[12]) {
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%02d ", table[i * 4 + j]);
		}
		printf("\n");
	}

}

int maximum(int max, int maxi, int maxj) {
	printf("\nLargest number in a table is %02d and its index is %d, %d\n", max, maxi, maxj);
}

int average(int sum) {
	printf("Average number in a table is %d", sum / 12);
}