#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int checkTheNum(int num);

int main() {
	srand(time(0));
	int number, flag = 0;

	while (1) {
		number = (rand() % 1000) + 1;
		printf("Try to guess a number in a range 1-1000:\n");
		flag = checkTheNum(number);
		if (flag) {
			return 0;
		}
		else {
			continue;
		}
	}
	
}

int checkTheNum(int num) {
	int input, numLen = 0;
	char str_input[5];
	char yesNo;
	while (1) {
		scanf("%s", &str_input);
		for (int i = 0; i < 4; ++i) {
			if (isdigit(str_input[i])) {
				numLen += 1;
			}
		}
		if (numLen < 1) {
			printf("Invalid input, please try again.\n");
			continue;
		}
		sscanf(str_input, "%d", &input);
		if (input == num) {
			printf("Thats correct!\n");
			break;
		}
		else {
			if (input < num) {
				printf("Your number is too small, try again.\n");
				continue;
			}
			if (input > num) {
				printf("Your number is too big, try again.\n");
				continue;
			}
		}
	}
	printf("Do you want to play again?(y = yes, n = no)\n");
	scanf("%s", &yesNo);
	if (yesNo == 'y') {
		return 0;
	}
	else {
		return 1;
	}

}