#include <stdio.h>
#include <stdlib.h>

int convertSeconds(int hours, int min, int sec);

int main() {
	int hours1, min1, sec1, hours2, min2, sec2, diff;
	printf("Enter the first time in order hours, minutes, seconds:\n");
	printf("Hours:");
	scanf("%d", &hours1);
	printf("Minutes:");
	scanf("%d", &min1);
	printf("Seconds:");
	scanf("%d", &sec1);

	printf("\nEnter the second time in order hours, minutes, seconds:\n");
	printf("Hours:");
	scanf("%d", &hours2);
	printf("Minutes:");
	scanf("%d", &min2);
	printf("Seconds:");
	scanf("%d", &sec2);

	diff = abs(convertSeconds(hours1, min1, sec1) - convertSeconds(hours2, min2, sec2));

	printf("The difference between these times is %d seconds\n", diff);

	return 0;
}

int convertSeconds(int hours, int min, int sec) {
	int seconds_total = 0;
	seconds_total = sec + 60 * min + 3600 * hours;
	return seconds_total;
}