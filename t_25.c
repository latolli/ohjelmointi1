#include <stdio.h>
#include <math.h>

float rounding(float num[5]);

int main() {
	float num[5];
	printf("Enter five numbers:\n");
	scanf("%f%f%f%f%f", &num[0], &num[1], &num[2], &num[3], &num[4]);

	rounding(num);

	return 0;
}

float rounding(float num[5]) {
	float round[5];
	for (int i = 0; i < 5; ++i) {

		round[i] = floor(num[i] + 0.5);
	}

	printf("Original	Rounded\n");

	for (int i = 0; i < 5; ++i) {

		printf("%1.3f		%1.2f\n", num[i], round[i]);
	}
}