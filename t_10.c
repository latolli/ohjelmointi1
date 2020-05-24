#include <stdio.h>
#include <stdlib.h>

int main() {
	int pisteet;
	char * arvosana;
	printf("Pisteet kokeesta: \n");
	scanf("%d", &pisteet);

	switch(pisteet) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			arvosana = "H";
			break;
		case 12:
		case 13:
			arvosana = "1";
			break;
		case 14:
		case 15:
		case 16:
			arvosana = "2";
			break;
		case 17:
		case 18:
		case 19:
			arvosana = "3";
			break;
		case 20:
		case 21:
		case 22:
			arvosana = "4";
			break;
		case 23:
		case 24:
			arvosana = "5";
			break;
		default:
			printf("Virheellinen pistemaara\n");
			return 0;

	}

	printf("Arvosanasi on %c", arvosana[0]);
	return 0;
}