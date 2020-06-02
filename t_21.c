#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calc_average(int i, double sum);

int main() {

	char input[64];
	double num, average, sum = 0;
	int i = 0, errors = 0, flag = 0;

	while (1) {
		printf("Enter a positive real number:\n");
		fgets(input, 63, stdin);

		for (int j = 0; j < strlen(input) - 1; ++j) {
			if (input[j] != '0' && input[j] != '1' && input[j] != '2' &&
				input[j] != '3' && input[j] != '4' && input[j] != '5' &&
				input[j] != '6' && input[j] != '7' && input[j] != '8' &&
				input[j] != '9' && input[j] != '-' && input[j] != '.') {
				flag = 1;
				printf("Invalid input, try again.\n");
				break;
			}
			else if (j != 0 && input[j] == '-') {
				flag = 1;
				printf("Invalid input, try again.\n");
				break;
			}
		}

		if (flag == 1) {
			++errors;
			flag = 0;
			if (errors > 2) {
				printf("You are hopeless, program ends now!\n");
				return 0;
			}
			continue;
		}

		if (sscanf(input, "%lf", &num) != 1) {
			++errors;
			if (errors > 2) {
				printf("You are hopeless, program ends now!\n");
				return 0;
			}
			printf("Invalid input, try again.\n");
			continue;
		}

		if (num < 0) {
			calc_average(i, sum);
			break;
		}

		sum = sum + num;
		++i;
		average = sum / i;
		errors = 0;
	}

	return 0;
}

double calc_average(int i, double sum) {
	if (i == 0) {
		printf("Average of your numbers doesn't exist.\n");
	}
	else {
		double average = sum / i;
		printf("Average of your numbers: %3.2lf\n", average);
	}
}

/*Apuna käytetty https://www.youtube.com/watch?v=zZPkgW9VPKw*/