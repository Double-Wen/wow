// memset函数的使用

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int foo[10];
	for(int i=0; i<10; i++)
	{
		cout << foo[i] << endl;
	}
	memset(foo, 0, sizeof(foo));
	for(int i=0; i<10; i++)
	{
		cout << foo[i] << endl;
	}

	return 0;
}