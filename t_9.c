#include <stdio.h>
#include <stdlib.h>

int main() {
	int pisteet;
	char * arvosana;
	printf("Pisteet kokeesta: \n");
	scanf("%d", &pisteet);

	if (pisteet < 0 || pisteet > 24)
	{
		printf("Virheellinen pistemaara\n");
		return 0;
	}
	else if (pisteet >= 0 && pisteet < 12) {
		arvosana = "H";
	}
	else if (pisteet < 14) {
		arvosana = "1";
	}
	else if (pisteet < 17) {
		arvosana = "2";
	}
	else if (pisteet < 20) {
		arvosana = "3";
	}
	else if (pisteet < 23) {
		arvosana = "4";
	}
	else {
		arvosana = "5";
	}

	printf("Arvosanasi on %c", arvosana[0]);
	return 0;
}