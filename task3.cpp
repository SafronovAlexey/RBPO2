#include <cmath>
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
		system("PAUSE");
		return 0;


}

double f(double x) {
	return pow((1 + x + x*x) / (2 * x + x*x) + 2 - (1 - x - x*x) / (2 * x - x*x), -1)*(5 - 2 * x*x);
}

