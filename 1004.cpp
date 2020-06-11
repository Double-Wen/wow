// fill函数的使用

#include <iostream>
using namespace std;
int main()
{
	int foo[10];
	for(int i=0; i<10; i++)
	{
		cout << foo[i] << endl;
	}
	fill(foo, foo+10, 0);
	for(int i=0; i<10; i++)
	{
		cout << foo[i] << endl;
	}
	return 0;
}