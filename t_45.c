#include <stdio.h>

int printResults(char firstnames[10][20], char lastnames[10][20], int employees, int salary[10]);

int main(){
	int employees = 0, salary[10];
	char firstnames[10][20];
	char lastnames[10][20];

	printf("Maximum amopunt of employees is 10.\n");
	for (int i = 0; i < 10; ++i) {
		printf("Enter employee's name and salary. Enter salary = 0 if you want to continue.\n");
		printf("First name: ");
		scanf("%s", &firstnames[i]);
		printf("Last name: ");
		scanf("%s", &lastnames[i]);
		printf("Salary: ");
		scanf("%d", &salary[i]);
		if (salary[i] <= 0) {
			break;
		}
		++employees;
	}

	printResults(firstnames, lastnames, employees, salary);

	return 0;
}

int printResults(char firstnames[10][20], char lastnames[10][20], int employees, int salary[10]) {
	int units[9] = {1, 2, 5, 10, 20, 50, 100, 200, 500};
	int total[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

	printf("\nName:			%d$	%d$	%d$	%d$	%d$	%d$	%d$	%d$	%d$\n", units[0], units[1], units[2], units[3],
		units[4], units[5], units[6], units[7], units[8]);
	for (int i = 0; i < employees; ++i) {
		int amountOfUnits[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
		for (int j = 8; j >= 0; --j) {
			amountOfUnits[j] = salary[i] / units[j];
			total[j] += amountOfUnits[j];
			salary[i] = salary[i] - (amountOfUnits[j] * units[j]);
		}
		printf("%s 	%s		%d 	%d 	%d 	%d 	%d 	%d 	%d 	%d 	%d\n", firstnames[i], lastnames[i] ,amountOfUnits[0],
			amountOfUnits[1], amountOfUnits[2], amountOfUnits[3], amountOfUnits[4], amountOfUnits[5],
			amountOfUnits[6], amountOfUnits[7], amountOfUnits[8]);
	}
	printf("Total: 	 		%d	%d	%d	%d	%d	%d	%d	%d	%d\n", total[0], total[1], total[2], total[3],
		total[4], total[5], total[6], total[7], total[8]);
}