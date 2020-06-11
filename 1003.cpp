// 冒泡排序

#include <iostream>
using namespace std;

int main()
{
	int foo[100];
	int n=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &foo[i]);
	}
	for(int i=0; i<n; i++)
	{
		printf("%d\n", foo[i]);
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(foo[i]>foo[i+1])
			{
				int tmp = foo[i];
				foo[i] = foo[i+1];
				foo[i+1] = tmp;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("%d\n", foo[i]);
	}
	return 0;
}

