#include <stdio.h>
#include <stdlib.h>

int main() {

	double input, average, sum = 0;
	int i = 0;

	do {
		printf("Enter a positive real number:\n");
		scanf("%lf", &input);
		if (input < 0) {
			break;
		}
		sum = sum + input;
		++i;
		average = sum / i;
	} while(1);

	printf("Average of your numbers: %3.2lf", average);

	return 0;
}