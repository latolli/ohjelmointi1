#include <stdio.h>
#include <stdlib.h>

double laske_vero(double num1, double num2);

int main() {
	int tuntipalkka;
	int tunnit;
	float vero_prosentti;

	printf("Anna tuntipalkkasi kokonaislukuna:\n");
	scanf("%d", &tuntipalkka);
	printf("Anna tehdyt työtunnit kokonaislukuna:\n");
	scanf("%d", &tunnit);
	double palkka = tuntipalkka * tunnit;
	printf("Anna veroprosenttisi kokonaislukuna:\n");
	scanf("%f", &vero_prosentti);

	double verot = laske_vero(palkka, vero_prosentti);
	double netto_palkka = palkka - verot;

	printf("Palkastasi sinä saat: %3.2f, ja veroihin menee: %3.2f", netto_palkka, verot);

	return 0;
}

double laske_vero(double num1, double num2) {
	double veron_maara = num1 * (num2 / 100);

	return veron_maara;
}