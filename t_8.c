#include <stdio.h>
#include <stdlib.h>

int main() {

	float bensa = 0;
	float tankattu_bensa;
	float ajokilometrit = 0;
	float ajokilometrit_lisaa;

	while (1) {
		printf("Jos haluat lopettaa ohjelman, anna bensanmaaraksi -1\n");
		printf("Tankattu bensamaara:\n");
		scanf("%f", &tankattu_bensa);
		if (tankattu_bensa == -1) {
			break;
		}
		bensa = bensa + tankattu_bensa;
		printf("Ajetut kilometrit:\n");
		scanf("%f", &ajokilometrit_lisaa);
		ajokilometrit = ajokilometrit + ajokilometrit_lisaa;
		float kulutus = (tankattu_bensa / ajokilometrit_lisaa) * 100;

	}

	float keskikulutus = (bensa / ajokilometrit) * 100;
	printf("Keskikulutus on: %3.2f l/100km", keskikulutus);
	
	return 0;
}