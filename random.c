#include <time.h>
#include <stdlib.h>
#include <stdio.h>

char randchar(){
//	printf("Generating random letter\n");
	int r = rand() % (90-65+1)+65;      // Returns a pseudo-random integer between 0 and RAND_MAX
	return (char)r;
}
