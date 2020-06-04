#include <stdio.h>
#include <math.h>

float roundInteger(float num);
float roundTenth(float num);
float roundHundreth(float num);
float roundThousandth(float num);

int main() {
	char str_num[15];
	float num;

	while(1) {
		printf("Enter a number:\n");
		fgets(str_num, 14, stdin);

		if (sscanf(str_num, "%f", &num) != 1) {
			printf("Invalid input -> Program ends..");
			return 0;
		}

		printf("Original	Rounded\n");
		roundInteger(num);
		roundTenth(num);
		roundHundreth(num);
		roundThousandth(num);
	}

	return 0;
}

float roundInteger(float num) {
	float round = floor(num + 0.5);
	printf("%1.4f		%1.4f\n", num, round);
}

float roundTenth(float num) {
	float round = floor(num * 10 + 0.5) / 10;
	printf("%1.4f		%1.4f\n", num, round);
}

float roundHundreth(float num) {
	float round = floor(num * 100 + 0.5) / 100;
	printf("%1.4f		%1.4f\n", num, round);
}

float roundThousandth(float num) {
	float round = floor(num * 1000 + 0.5) / 1000;
	printf("%1.4f		%1.4f\n", num, round);
}