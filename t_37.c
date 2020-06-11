#include <stdio.h>
#include <ctype.h>

int amountOfDays(int mm);

int main() {
	int input, len_input = 0;
	char str_input[10];
	printf("Enter a month's number:\n");
	scanf("%s", &str_input);
	for (int i = 0; i < 9; ++i) {
		if (isdigit(str_input[i])) {
			++len_input;
		}
	}
	if (len_input < 1) {
		printf("Invalid input, program ends..\n");
		return 0;
	}
	else {
		sscanf(str_input, "%d", &input);
		printf("Days in that month: %d\n", amountOfDays(input));
		return 0;
	}

}

int amountOfDays(int mm) {
	switch(mm) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return 28;
		default:
			printf("Invalid month's number.\n");
			return -1;
	}
}