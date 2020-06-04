#include <stdio.h>

int perfect(int num);

int main() {

	printf("Perfect integers between 1 and 1000 are:\n");

	for (int num = 1; num <= 1000; num++){
		if (perfect(num)) {
			printf("%d\n", num);
		}
	}

	return 0;
}

int perfect(int num) {
	int sum = 0;
	for (int i = 1; i <= (num / 2); ++i) {
		if (num % i == 0) {
			sum += i;
		}
	}
	if (sum == num) {
		return 1;
	}
	else {
		return 0;
	}
}