#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	
	printf("Enter a, b, c\n");
	scanf("%d%d%d", &a, &b, &c);

	if(a>b) {
		if(a > c) {
			printf("A");
			exit(0);
		} else {
			printf("C");
			exit(0);
		}
	} else if(a > c) {
		printf("B");
		exit(0);
	} else if(b > c) {
		printf("B");
		exit(0);
	} else {
		printf("C");
		exit(0);
	}

}
