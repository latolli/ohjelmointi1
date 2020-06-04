#include <stdio.h>

int raiseIntToPotency(int num, int exp);

int main() {
	int num, exp;
	printf("Enter the base number:\n");
	scanf("%d", &num);
	printf("Enter the exponent:\n");
	scanf("%d", &exp);

	printf("The result is %d", raiseIntToPotency(num, exp));

	return 0;
}

int raiseIntToPotency(int num, int exp) {
	int result = num;
	for (int i = 1; i < exp; ++i) {
		result = result * num;
	}
	return result;
}