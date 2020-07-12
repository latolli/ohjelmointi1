#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int ratings[4][10];
	srand(time(0));

	printf("This program will run 4 tests, in each test 10 randomly generated ratings (1-5) will be given to soda based on the taste.\n");
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 10; ++j) {
			ratings[i][j] = 1 + rand() % 5;
		}
	}

	for (int i = 0; i < 4; ++i) {
		int goodRatings = 0;
		for (int j = 0; j < 10; ++j) {
			if (ratings[i][j] >= 3) {
				++goodRatings;
			}
		}
		if (goodRatings > 5) {
			printf("%d. soda got rate 3 or higher %d times, so it's approved.\n", i + 1, goodRatings);
		}
		else {
			printf("%d. soda got rate 3 or higher %d times, so it's rejected.\n", i + 1, goodRatings);
		}
	}

	return 0;
}