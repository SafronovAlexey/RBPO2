#include <cmath>
#include <stdio.h>
void f(double& x, double& result) {
	result = pow((1 + x + x*x) / (2 * x + x*x) + 2 - (1 - x - x*x) / (2 * x - x*x), -1)*(5 - 2 * x*x);
}

int main() {
	double x = 5;
    double result;
    f(x, result);
	printf("x = 5, f = %.4f\n", result);
	double x2;
	scanf("%lf", &x2);
	if ((2 * x2 + x2*x2 != 0) && (2 * x2 - x2*x2 != 0)) {
		f(x2, result);
		printf(" x = %.4lf, f =  %.4f\n", x2, result);
	}
	else printf("Invalid\n");
	system("PAUSE");
	return 0;
}