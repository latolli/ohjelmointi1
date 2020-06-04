#include <stdio.h>
#include <math.h>

float laskeParkkiMaksu(float time);

int main() {
	float time1, time2, time3;

	printf("First customer's parking time:\n");
	scanf("%f", &time1);
	printf("Second customer's parking time:\n");
	scanf("%f", &time2);
	printf("Third customer's parking time:\n");
	scanf("%f", &time3);


	printf("Customer 	Hours	Charge\n");
	printf("%d 		%2.1f	%2.2f\n", 1, time1, laskeParkkiMaksu(time1));
	printf("%d 		%2.1f	%2.2f\n", 2, time2, laskeParkkiMaksu(time2));
	printf("%d 		%2.1f	%2.2f\n", 3, time3, laskeParkkiMaksu(time3));
	printf("Total 		%2.1f	%2.2f\n", (time1 + time2 + time3), 
		(laskeParkkiMaksu(time1) + laskeParkkiMaksu(time2) + laskeParkkiMaksu(time3)));

	return 0;
}

float laskeParkkiMaksu(float time){
	float charge;

	if (time <= 3){
		charge = 2;
	}
	else if (time <= 19){
		charge = 2 + (time - 3) * 0.5;
	}
	else {
		charge = 10;
	}
	return charge;
}