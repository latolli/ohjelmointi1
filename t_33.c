#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int generateNumbers();
int wrongAnswerLoop(int num1, int num2);

int main(){
	srand(time(0));
	int answer = 0, num1, num2, flag;
	char stranswer[3] = {' ', ' ', '\0'};

	printf("Enter -1 to end the program.\n");

	while(1) {
		flag = 0;
		num1 = generateNumbers();
		num2 = generateNumbers();
		printf("How much is %d times %d? ",num1 ,num2);
		scanf("%2s", &stranswer);
		for (int i = 0; i < 2; ++i) {
			if (i == 0 && stranswer[0] == '-') {
				continue;
			}
			if (i == 1 && stranswer[1] != 1) {
				break;
			}
			if (isdigit(stranswer[i]) != 1) {
				printf("Invalid input, try again.\n");
				flag = 1;
				break;
			}
		}
		if (flag) {
			continue;
		}
		sscanf(stranswer, "%d", &answer);
		if (answer == -1) {
			printf("Program ends..");
			return 0;
		}
		else if (answer == num1 * num2) {
			printf("Correct!\n");
			continue;
		}
		else {
			flag = wrongAnswerLoop(num1, num2);
			if (flag)  {
				printf("Correct!\n");
				continue;
			}
			else {
				printf("Program ends..");
				return 0;
			}
		}
	}

	return 0;
}

int generateNumbers() {
	int result;

	result = (rand() % 9) + 1;
	return result;
}

int wrongAnswerLoop(int num1, int num2) {
	int answer, flag;
	char stranswer[3];
	while(1) {
		flag = 0;
		printf("Wrong, try again >");
		scanf("%s", &stranswer);
		for (int i = 0; i < 2; ++i) {
			if (i == 0 && stranswer[0] == '-') {
				continue;
			}
			if (i == 1 && stranswer[1] != 1) {
				break;
			}
			if (isdigit(stranswer[i]) != 1) {
				printf("Invalid input, try again.\n");
				flag = 1;
				break;
			}
		}
		if (flag) {
			continue;
		}
		sscanf(stranswer, "%d", &answer);
		if (answer == -1) {
			return 0;
		}
		else if (answer == num1 * num2) {
			return 1;
		}
		else {
			continue;
		}
	}
}