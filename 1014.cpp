// 使用eps对不精确数进行比较

#include <iostream>
#include <cmath>

const double eps = 1e-8;

#define Equ(a,b) ((fabs((a)-(b)))<(eps))

int main()
{
	double foo = 0.3-0.2;
	printf("%f\n", foo);
	std::cout << 0.3-0.2 << std::endl;
	double bar = 4 * asin(sqrt(2.0)/2);
	double qux = 3 * asin(sqrt(3.0)/2);
	std::cout << bar << " " << qux <<  std::endl;
	// 可能是因为精度太高,所以好像不需要eqs来消除误差干扰
	return 0;
}