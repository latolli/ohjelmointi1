#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int generateNumbers();
int wrongAnswerLoop(int num1, int num2, int correctAnswer);
int division();

int main(){
	srand(time(0));
	int answer = 0, num1, num2, flag, divOrMult;
	char stranswer[3] = {' ', ' ', '\0'};

	printf("Enter -1 to end the program.\n");

	while(1) {
		flag = 0;
		divOrMult = rand() % 2;
		if (divOrMult == 1) {
			flag = division();
			if (flag) {
				continue;
			}
			else {
				return 0;
			}
		}
		else {
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
				flag = wrongAnswerLoop(num1, num2, (num1 * num2));
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
	}

	return 0;
}

int generateNumbers() {
	int result;

	result = (rand() % 9) + 1;
	return result;
}

int wrongAnswerLoop(int num1, int num2, int correctAnswer) {
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
		else if (answer == correctAnswer) {
			return 1;
		}
		else {
			continue;
		}
	}
}

int division() {
	int answer = 0, num1, num2, flag = 0, divOrMult;
	char stranswer[3] = {' ', ' ', '\0'};

	while(1) {
		num1 = generateNumbers();
		num2 = generateNumbers();
		if (num1 % num2 == 0) {
			break;
		}
	}

	printf("How much is %d divided by %d? ",num1 ,num2);
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
		return 1;
	}
	sscanf(stranswer, "%d", &answer);
	if (answer == -1) {
		printf("Program ends..");
		return 0;
	}
	else if (answer == num1 / num2) {
		printf("Correct!\n");
		return 1;
	}
	else {
		flag = wrongAnswerLoop(num1, num2, (num1 / num2));
		if (flag)  {
			printf("Correct!\n");
			return 1;
		}
		else {
			printf("Program ends..");
			return 0;
		}
	}
}