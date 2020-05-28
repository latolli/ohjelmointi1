#include <stdio.h>
#include <stdlib.h>

int main() {
	int celsius;
	double fahrenheit;
	int i = -1;
	
	while (i < 21)
	{
		if (i == -1)
		{
			printf("Celsius		Fahrenheit\n");
		}
		else {
			celsius = -100 + 10 * i;
			fahrenheit = 1.8 * celsius + 32;
			printf("%d		%3.2f\n", celsius, fahrenheit);
		}
		++i;
	}

	return 0;
}