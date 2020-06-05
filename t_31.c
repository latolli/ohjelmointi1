#include <stdio.h>

char turnNumAround(char num[5]);

int main() {
	char number[5];
	int num;
	printf("Enter a integer in a range 1-9999:\n");
	scanf("%s", &number);
	if (sscanf(number, "%d", &num) != 1) {
		printf("Invalid input, program ends..\n");
	}
	else if(num < 1) {
		printf("Invalid input, program ends..\n");
	}
	else {
		turnNumAround(number);
	}

	return 0;
}

char turnNumAround(char num[5]) {
	char newNum[5];
	for (int i = 0; i < 4; ++i) {
		newNum[i] = num[3 - i];
	}
	printf("Original number:%c%c%c%c\n", num[0], num[1], num[2], num[3]);
	printf("Flipped number:%c%c%c%c\n", newNum[0], newNum[1], newNum[2], newNum[3]);
}