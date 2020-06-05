#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flipCoin();

int main(){
	int heads = 0, tails = 0;
	srand(time(0));

	printf("Lets simulate flipping a coin 100 times.\n");

	for (int i = 0; i < 100; ++i) {
		if (flipCoin() == 0) {
			++heads;
		}
		else {
			++tails;
		}
	}

	printf("You got %d heads and %d tails.\n", heads, tails);

	return 0;
}

int flipCoin() {
	int result;

	result = rand() % 2;
	return result;
}