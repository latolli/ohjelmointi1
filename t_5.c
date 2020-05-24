#include <stdio.h>
#include <stdlib.h>

int main() {
	float lainasumma;
	float lainapaivat;
	float korko;

	printf("Lainasumma?\n");
	scanf("%f", &lainasumma);
	printf("Lainapaivat?\n");
	scanf("%f", &lainapaivat);
	printf("Korko prosentteina?\n");
	scanf("%f", &korko);

	float kokonaiskorko = (lainasumma * (korko / 100) * (lainapaivat / 365));

	printf("Kokonaiskorko on %3.2f\n", kokonaiskorko);

	return 0;
}