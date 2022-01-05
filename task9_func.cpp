#include "func2.h"
double x, result;
namespace Safronov {
    void f() {
	    result = pow((1 + x + x*x) / (2 * x + x*x) + 2 - (1 - x - x*x) / (2 * x - x*x), -1)*(5 - 2 * x*x);
    }
}