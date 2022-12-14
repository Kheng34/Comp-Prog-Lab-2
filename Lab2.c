#include <stdio.h>
#include <stdbool.h>
#include <math.h>

float delta, x1, x2;
int a, b, c;
bool startAgain = 1;

int main() {
	while(startAgain == 1) {
		printf("Please enter a: ");
		scanf("%d", &a);
		printf("Please enter b: ");
		scanf("%d", &b);
		printf("Please enter c: ");
		scanf("%d", &c);
		if(a == 0) {
			startAgain = 1;
			printf("Invalid coefficients!\n");
		}
		else if(b == 0) {
			startAgain = 1;
			printf("Invalid coefficients!\n");
		}
		else if(c == 0) {
			startAgain = 1;
			printf("Invalid coefficients!\n");
		}
		else {
			startAgain = 0;
		}
	}
	delta = b*b-4*a*c;
	if(delta > 0) {
		printf("2 real roots\n");
	}
	else if(delta < 0) {
		printf("No real roots\n");
	}
	else {
		printf("2 real roots with opposite signs\n");
	}
	x1 = (-b + sqrt(delta)) / 2 * a;
	x2 = (-b - sqrt(delta)) / 2 * a;
	printf("%d\n", x1);
	printf("%d", x2);
}
