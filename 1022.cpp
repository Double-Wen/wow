// codeup 1934 P87
#include <iostream>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
	int foo[1000];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &foo[i]);
	}
	int x;
	scanf("%d", &x);
	int j=0;
	for(j=0; j<n; j++)
	{
		if(foo[j] == x)
		{
			printf("%d\n", j);
			break;
		}
	}
	if(j==n)
	{
		printf("-1\n");
	}}
	return 0;
}