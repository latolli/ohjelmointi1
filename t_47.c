#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

float approximatePi(int numbers);

int main() {
	int numbers;
	float approximation, ratio, precent;
	srand(time(0));

	printf("How many numbers do you want have in this pi approximation (100-1000): ");
	scanf("%d", &numbers);
	if (numbers >= 100 && numbers <= 1000) {
		approximation = approximatePi(numbers);
		ratio = approximation / 3.1415926;
		if (ratio > 1) {
			precent = (ratio - 1) * 100;
			printf("Approximated pi %f was %.2f precent bigger than the actual pi.", approximation, precent);
		}
		else {
			precent = (1 - ratio) * 100;
			printf("Approximated pi %f was was %.2f precent smaller than the actual pi.", approximation, precent);
		}
	}
	else {
		printf("Invalid input, program ends..\n");
		return 0;
	}

	return 0;
}

float approximatePi(int numbers){
	float radius, approPi, singularPi, totalPi = 0, x_float, y_float;
	int x_int, y_int;

	for (int i = 0; i <= numbers; ++i) {
		x_int = 1 + (rand() % 1000);
		y_int = 1 + (rand() % 1000);
		x_float = x_int * 0.001;
		y_float = y_int * 0.001;
		radius = sqrt(x_float * x_float + y_float * y_float);
		singularPi = (3.1415926/4) / (radius * radius);
		totalPi += singularPi;
	}
	approPi = totalPi / numbers;
	return approPi;
}