#include <stdio.h>

int main() {

	int yr;
	
	printf("ENter year\n");
	scanf("%d", &yr);

	
	if(yr % 100 == 0) {
		if(yr % 400 == 0) {
			printf("L");
		} else {
			printf("NL");
		}
	} else if(yr % 4 == 0) 
		printf("L");
	else 
		printf("NL");

	return 0;

}
