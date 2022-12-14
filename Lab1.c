#include <stdio.h>

int a, b, c;

int main() {
	printf("Welcome!\nPlease enter first number: ");
	scanf("%d", &a);
	printf("Please enter second number: ");
	scanf("%d", &b);
	printf("Please enter third number: ");
	scanf("%d", &c);
	printf("Biggest: ");
	if(a < b) {
		if(b < c) {
			printf("%d", c);
		}
		else {
			printf("%d", b);
		}
	}
	else {
		if(a < c) {
			printf("%d", c);
		}
		else {
			printf("%d", a);
		}
	}
}
