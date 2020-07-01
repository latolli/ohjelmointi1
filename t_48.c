#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lottery(int intRows[20][7], int count);

int main() {
	char strRow[3];
	int intRows[20][7], randomNum, flag, count = 0;
	srand(time(0));

	printf("Lets play lottery. When you are done with the rows, enter 's' to start the lottery.\n");
	printf("Maximum amount of lottery rows is 20 and your numbers must be in range 1-40.\n");
	while (1) {
		printf("Enter 7 numbers one by one or enter 'g' to let the program generate a random row for you.\n");
		scanf("%s", &strRow);
		if (strRow[0] == 's') {
			lottery(intRows, count);
			return 0;
		}
		if (strRow[0] == 'g') {
			for (int i = 0; i < 7; ++i) {
				flag = 0;
				randomNum = 1 + rand() % 40;
				for(int j = 0; j < i; ++j) {
					if (randomNum == intRows[count][j]) {
						flag = 1;
						break;
					}
				}
				if (flag) {
					--i;
					continue;
				}
				else {
					intRows[count][i] = randomNum;
				}
			}
			++count;
		}
		else {
			sscanf(strRow, "%d", &intRows[count][0]);
			if (intRows[count][0] < 1 || intRows[count][0] > 40) {
				printf("That is not in range 1-40, try again.\n");
				continue;
			}
			for (int i = 1; i < 7; ++i) {
				flag = 0;
				scanf("%d", &randomNum);
				if (randomNum < 1 || randomNum > 40) {
					printf("That is not in range 1-40, try again.\n");
					--i;
					continue;
				}
				for(int j = 0; j < i; ++j) {
					if (randomNum == intRows[count][j]) {
						flag = 1;
						break;
					}
				}
				if (flag) {
					printf("You can't choose the same number again.\n");
					--i;
					continue;
				}
				else {
					intRows[count][i] = randomNum;
				}
			}
			++count;
		}
		if (count == 20) {
			lottery(intRows, count);
			return 0;
		}


	}
	
}

int lottery(int intRows[20][7], int count) {
	int winningRow[8], correctNumbers, flag, randomNum, extraNum;
	for (int i = 0; i < 8; ++i) {
		flag = 0;
		randomNum = 1 + rand() % 40;
		for(int j = 0; j < i; ++j) {
			if (randomNum == winningRow[j]) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			--i;
			continue;
		}
		else {
			winningRow[i] = randomNum;
		}
	}

	printf("The winning row is ");
	for (int i = 0; i < 7; ++i) {
		printf("%02d ", winningRow[i]);
	}
	printf("and the addition number is %d", winningRow[7]);

	printf("\nAnd your rows were:\n");

	for (int i = 0; i < count; ++i) {
		extraNum = 0;
		correctNumbers = 0;
		printf("%d.", i + 1);
		for (int j = 0; j < 7; ++j) {
			printf(" %02d", intRows[i][j]);
			for (int k = 0; k < 7; ++k) {
				if (intRows[i][j] == winningRow[k]) {
					++correctNumbers;
				}
			}
			if (intRows[i][j] == winningRow[7]) {
				++extraNum;
			}
		}
		printf(", correct numbers: %d + %d.\n", correctNumbers, extraNum);
	}

}
