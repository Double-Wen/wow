// 指针的引用

#include <iostream>
using namespace std;

void swap(int *&p, int *&q)
{
	int *tmp = p;
	p = q;
	q = tmp;
}

int main()
{
	int a = 2;
	int b = 3;
	int *p = &a;
	int *q = &b;
	swap(p, q);
	cout << *p << " " << *q << endl;
	return 0;
}