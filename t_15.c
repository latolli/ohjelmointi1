#include <stdio.h>
#include <stdlib.h>

int main() {

	char* string[9] = {" "," "," "," "," "," "," "," ",'\0'};
	
	for (int i = 0; i < 8; ++i)
	{
		string[i] = "a";
		printf("%s%s%s%s%s%s%s%s\n", string[0], string[1], string[2], 
									string[3], string[4], string[5], 
									string[6], string[7]);
	}

	return 0;
}