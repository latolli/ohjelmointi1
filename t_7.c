#include <stdio.h>
#include <stdlib.h>

int main() {
	char num[5];
	printf("Anna jokin viisinumeroinen kokonaisluku:\n");
	scanf("%s", &num);

	printf("Lukusi on %c %c %c %c %c\n", num[0], num[1], num[2], num[3], num[4]);

	return 0;
}