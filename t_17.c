#include <stdio.h>
#include <stdlib.h>

int mid_number_reset (int num1, int num2, int num3, int num4, int num5);

int main() {

	int num1, num2, num3, num4;
	int num5 = 1;
	
	for (num1 = 1; num1 <= 10; ++num1)
	{
		for (num2 = 1; num2 <= 10 - num1; ++num2) {
			printf(" ");
		}
		for (num3 = num1; num3 <= num5; ++num3) {
			printf("%d", num3);
		}
		for (num4 = num5 - 1; num4 >= num1; --num4) {
			printf("%d", num4);
		}
		printf("\n");

		if (num5 == 9) {
			num5 = 1;
			mid_number_reset(num1, num2, num3, num4, num5);
			break;
		}
		else {
			num5 = (num5 + 2);
		}
		
	}

	return 0;
}

int mid_number_reset(int num1, int num2, int num3, int num4, int num5) {

	int num6;

	for (num1 = 6; num1 <= 10; ++num1)
	{
		for (num2 = 1; num2 <= 10 - num1; ++num2) {
			printf(" ");
		}
		for (num3 = num1; num3 <= 9; ++num3) {
			printf("%d", num3);
		}
		for (num6 = 0; num6 <= num5; ++num6) {
			printf("%d", num6);
		}
		for (num6 = num5 - 1; num6 >= 0; --num6) {
			printf("%d", num6);
		}
		for (num4 = 9; num4 >= num1; --num4) {
			printf("%d", num4);
		}
		printf("\n");
		num5 = (num5 + 2);
	}
}
