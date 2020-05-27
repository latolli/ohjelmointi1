#include <stdio.h>
#include <stdlib.h>

int main() {
	char num[5];
	printf("Anna jokin viisinumeroinen positiivinen kokonaisluku:\n");
	scanf("%s", &num);

	if (num[0] == num[4] && num[1] == num[3])
	{
		printf("Luku on palindromi\n");
	}
	else {
		printf("Luku ei ole palindromi\n");
	}

	return 0;
}