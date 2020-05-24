#include <stdio.h>
#include <stdlib.h>

int main() {
	int tuntipalkka;
	int tunnit;
	printf("Anna tuntipalkkasi:\n");
	scanf("%d", &tuntipalkka);
	printf("Anna tehdyt työtunnit:\n");
	scanf("%d", &tunnit);
	int palkka = tuntipalkka * tunnit;
	printf("Kokonaispalkkasi on:\n%d", palkka);

	return 0;
}