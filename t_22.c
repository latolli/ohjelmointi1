#include <stdio.h>
#include <math.h>

int converter(int num);

int main() {

	int bin;

	printf("Enter a five digit binary number:\n");
	scanf("%d", &bin);

	printf("Your number as a decimal is: %d\n", converter(bin));

	return 0;
}

int converter(int num) {
	int decimal = 0, rem;

	for (int i = 0; i < 5; ++i) {
		rem = num % 10;
		decimal = decimal + rem * pow(2, i);
		num = num / 10;
	}
	return decimal;
}

/*Apuna käytetty https://www.youtube.com/watch?v=_f0Jo3XKWoc*/