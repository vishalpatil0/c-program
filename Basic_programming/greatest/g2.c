#include <stdio.h>
#include <stdlib.h>

int main() {

	int a, b, c;

	printf("Enter a, b, c\n");
	scanf("%d%d%d", &a, &b, &c);

	if(a > b) {

		if(a > c) {
			printf("%d\n", a);
		}else {
			printf("%d\n", c);
		}		
	} else if(b > c) {
		printf("%d\n", b);
	} else {
		printf("%d\n", c);
	}
	

}
