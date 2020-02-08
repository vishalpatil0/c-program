#include<stdio.h>

int main() {

	int s, h, m;
	printf("Enter sec\n");
	scanf("%d", &s);

	h = s / 3600;
	s = s % 3600;
	m = s / 60;
	s = s % 60;

	printf("H: %d\n", h);
	printf("M: %d\n", m);
	printf("S: %d\n", s);

	return 0;
}
