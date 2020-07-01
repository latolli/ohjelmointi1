#include <stdio.h>

int main() {
	int num[21], printNum[21], flag, len = 0;
	printf("Enter 20 numbers in a range 10-100:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3],
		&num[4], &num[5], &num[6], &num[7], &num[8], &num[9], &num[10], &num[11], &num[12],
		&num[13], &num[14], &num[15], &num[16], &num[17], &num[18], &num[19]);

	for (int i = 0; i < 20; ++i) {
		if(num[i] < 10 || num[i] > 100) {
			printf("All numbers weren't in a range 10-100, program ends..\n");
			return 0;
		}
		flag = 0;
		for (int j = 0; j <= i; ++j) {
			if (num[i] == printNum[j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printNum[len] = num[i];
			++len;
		}
	}

	for (int k = 0; k < len; ++k) {
		printf("%d. %d\n", k + 1, printNum[k]);
	}
    
    return 0;
}
