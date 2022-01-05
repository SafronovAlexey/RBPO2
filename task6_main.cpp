#include <stdio.h>
double f(double x);
int main() {
	double x = 5;
	printf("x = 5, f = %.4f\n", f(x));
	double x2;
	scanf("%lf", &x2);
	if ((2 * x2 + x2*x2 != 0) && (2 * x2 - x2*x2 != 0)) {
		printf(" x = %.4lf, f =  %.4f\n", x2, f(x2));
	}
	else printf("Invalid");
	return 0;
}