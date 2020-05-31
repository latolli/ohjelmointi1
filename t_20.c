#include <stdio.h>
#include <stdlib.h>

int main() {

	double input, average, sum = 0;
	int i;
	for (i = 1; input >= 0; ++i) {
		printf("Enter a positive real number:\n");
		scanf("%lf", &input);
		if (input < 0) {
			break;
		}
		sum = sum + input;
		average = sum / i;
	}

	printf("Average of your numbers: %3.2lf", average);

	return 0;
}