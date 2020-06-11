#include <stdio.h>
#include <ctype.h>

int leapYear(int year);

int main() {
	int year, len_input;
	char str_year[5];
	printf("Enter a year:\n");
	scanf("%s", str_year);

	for (int i = 0; i < 5; ++i) {
		if (isdigit(str_year[i])) {
			++len_input;
		}
	}
	if (len_input < 1) {
		printf("Invalid input, program ends..\n");
		return 0;
	}
	else {
		sscanf(str_year, "%d", &year);
		leapYear(year);
	}
	return 0;
}

int leapYear(int year) {
	if(year % 400 == 0) {
		printf("Year %d is a leap year.\n", year);
	}
	else if(year % 100 != 0 && year % 4 == 0) {
		printf("Year %d is a leap year.\n", year);
	}
	else {
		printf("Year %d is not a leap year.\n", year);
	}
}