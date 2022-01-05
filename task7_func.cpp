#include <cmath>
extern double x, result;
void f() {
	result = pow((1 + x + x*x) / (2 * x + x*x) + 2 - (1 - x - x*x) / (2 * x - x*x), -1)*(5 - 2 * x*x);
}