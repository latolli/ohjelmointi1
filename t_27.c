#include <stdio.h>
#include <math.h>

float hypotenuse(float num1, float num2);

int main() {
	float num1, num2;
	printf("Enter the lenghth of the first cathetus:\n");
	scanf("%f", &num1);
	printf("Enter the lenghth of the second cathetus:\n");
	scanf("%f", &num2);

	if (num1 <= 0 || num2 <= 0) {
		printf("Invalid lenght of cathetus.\n");
		return 0;
	}

	printf("Length of the hypotenuse is:%1.3f\n",hypotenuse(num1, num2));

	return 0;
}

float hypotenuse(float num1, float num2) {
	float hypo = sqrt(pow(num1, 2) + pow(num2, 2));
	return hypo;
}