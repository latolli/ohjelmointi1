#include <stdio.h>

int amountOfDays(int mm);

int main() {
	int year1, year2, month1, month2, day1, day2, total1, total2, leapYears, diff;

	printf("Enter two dates between years 1901 - 2007. First date:\nYear:\n");
	scanf("%d", &year1);
	printf("Month:\n");
	scanf("%d", &month1);
	printf("Day:\n");
	scanf("%d", &day1);
	printf("Second date\nYear:\n");
	scanf("%d", &year2);
	printf("Month:\n");
	scanf("%d", &month2);
	printf("Day:\n");
	scanf("%d", &day2);

	total1 = year1 * 365 + day1;
	total2 = year2 * 365 + day2;

	for (int i = 1; i <= month1; ++i) {
		total1 += amountOfDays(i);
	}
	for (int j = 1; j <= month2; ++j) {
		total2 += amountOfDays(j);
	}

	diff = total1 - total2;
	if (diff < 0) {
		diff = diff * -1;
	}
	leapYears = (diff / 365) / 4;
	diff += leapYears;

	printf("The difference between these to dates is %d days.\n", diff);

	return 0;
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
