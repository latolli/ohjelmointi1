#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkOutcome(int score, int stake, int chips);

int main() {
	int dice1, dice2, score, chips = 10, stake;
	srand(time(0));

	printf("Welcome to american dice game, you have 10 chips at the beginning.\n");
	printf("Enter 0 as your stake or lose all your chips to end the game.\n");
	while (1) {
		printf("\nHow many chips you want to stake: ");
		scanf("%d", &stake);
		if (stake > chips) {
			printf("You don't have that many chips, try again.\n");
			continue;
		}
		if (stake == 0) {
			printf("Game ends, you had %d chips left.", chips);
			return 0;
		}
		dice1 = 1 + (rand() % 6);
		dice2 = 1 + (rand() % 6);
		score = dice1 + dice2;
		printf("You threw %d and %d, total: %d.\n", dice1, dice2, score);

		chips = checkOutcome(score, stake, chips);
		if (chips == 0) {
			printf("\nGame ends, you had %d chips left.\n", chips);
			return 0;
		}
		printf("Now you have %d chips in total.\n", chips);
	}
	
	return 0;
}

int checkOutcome(int score, int stake, int chips) {
	int dice1, dice2, beginningScore = score;
	if (score == 7 || score == 11) {
		printf("You won %d chips.\n", stake * 2);
		chips += (stake * 2);
		return chips;
	}
	else if (score == 2 || score == 3 || score == 12) {
		printf("You lost %d chips.\n", stake);
		chips -= stake;
		return chips;
	}

	while (1) {
		printf("You didn't win or lose, lets throw again.\n");
		dice1 = 1 + (rand() % 6);
		dice2 = 1 + (rand() % 6);
		score = dice1 + dice2;
		printf("You threw %d and %d, total: %d.\n", dice1, dice2, score);
		if (score == 7) {
			printf("You lost %d chips.\n", stake);
			chips -= stake;
			return chips;
		}
		if (score == beginningScore) {
			printf("You won %d chips.\n", stake);
			chips += stake;
			return chips;
		}

	}

}
