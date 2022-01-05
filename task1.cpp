#include <cmath>
#include <stdio.h>
int main() {
	double x = 5;
	printf("x = 5, f = %.4f\n", pow((1 + x + x*x) / (2 * x + x*x) + 2 - (1 - x - x*x) / (2 * x - x*x), -1)*(5 - 2 * x*x));
	double x2;
	scanf("%lf", &x2);
	if ((2 * x2 + x2*x2 != 0) && (2 * x2 - x2*x2!=0)) {
		printf(" x = %.4lf, f =  %.4f\n", x2, pow((1 + x2 + x2*x2) / (2 * x2 + x2*x2) + 2 - (1 - x2 - x2*x2) / (2 * x2 - x2*x2), -1)*(5 - 2 * x2*x2));
	}else printf("Invalid\n");
	system("PAUSE");
	return 0;
}
