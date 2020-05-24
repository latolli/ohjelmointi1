#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1;
	int num2;

	printf("Anna jokin kokonaisluku:\n");
	scanf("%d", &num1);
	printf("Anna jokin toinen kokonaisluku:\n");
	scanf("%d", &num2);

	if (num2 % num1 == 0) {
		printf("Luku %d on luvun %d monikerta", num1, num2);
	}
	else {
		printf("Luku %d ei ole luvun %d monikerta", num1, num2);
	}

	return 0;
}