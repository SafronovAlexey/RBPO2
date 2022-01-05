#include <cmath>
#include <stdio.h>
double x, result;
void f();

int main() {
	x = 5;
    f();
	printf("x = 5, f = %.4f\n", result);
	scanf("%lf", &x);
	if ((2 * x2 + x2*x2 != 0) && (2 * x2 - x2*x2 != 0)) {
		f();
		printf(" x = %.4lf, f =  %.4f\n", x, result);
	}
	else printf("Invalid\n");
	system("PAUSE");
	return 0;
}

void f() {
	result = pow((1 + x + x*x) / (2 * x + x*x) + 2 - (1 - x - x*x) / (2 * x - x*x), -1)*(5 - 2 * x*x);
}

