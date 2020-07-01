#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int printTable(int table[20]);
int generateTable();

int main() {
	printf("Program starts..\n");

	generateTable();
	
	return 0;
}

int generateTable() {
	srand(time(0));
	int count = 0, flag, newNum, table[20];
	do {
		flag = 0;
		newNum = rand() % 20 + 1;
		for (int i = 0; i < count; ++i) {
			if (newNum == table[i]) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			continue;
		}
		else {
			table[count] = newNum;
			++count;
		}
	} while (count < 20);
	printTable(table);
}

int printTable(int table[20]) {
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%02d ", table[i * 4 + j]);
		}
		printf("\n");
	}
}
