#include <stdio.h>
#include <ctype.h>

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
	int numLen = 0, k = 0;
	char newNum[5];
	printf("Original number:");
	for (int i = 0; i < 4; ++i) {
		if (isdigit(num[i])) {
			numLen += 1;
			printf("%c", num[i]);
			num[k] = num[i];
			++k;
		}
	}

	printf("\nFlipped number:");
	for (int j = 0; j < numLen; ++j) {
		newNum[j] = num[numLen - 1 - j];
		printf("%c", newNum[j]);
	}
}