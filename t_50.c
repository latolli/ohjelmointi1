#include <stdio.h>
#include <string.h>

int main() {
	FILE *text;
	char string[100];

	text = fopen("testfile.txt", "r");

	if(text == 0) {
		perror("Error");
		return -1;
	}
	if(fgets(string, 100, text) != 0) {
		strlwr(string);
		puts(string);
		strupr(string);
		puts(string);
	}

	fclose(text);

	return 0;
}

/*Apuna käytetty https://www.tutorialspoint.com/c_standard_library/c_function_perror.htm*/