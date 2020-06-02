#include <stdio.h>
#include <math.h>

int main() {

	float neper = 1, factorial = 1;

	for (int i = 1; i < 10; ++i) {
		for (int j = 1; j <= i; ++j) {
			factorial *= j;
		}
		neper = neper + (1 / factorial);
		factorial = 1;
	}

	printf("Neper number is about: %3.8f\n", neper);

	return 0;
}