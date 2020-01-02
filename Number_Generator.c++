#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void) {
	int i; 

	srand(time(NULL)); 
	for (i = 1; i <= 320; i++) {

		
		printf("%1d", 1 + (rand() % 9));

		
		if (i % 16 == 0) {
			printf("\n");
		}
	}
	return 0; 
} 
