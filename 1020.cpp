// PAT B1011
#include <iostream>
using namespace std;

int main()
{
	//freopen("/home/ubuntu/tmp/hello.in", "r", stdin);
	int t=0;
	scanf("%d%*c", &t);
	long int A, B, C;
	int index=0;
	while(t--)
	{
		// cout << t << endl;
		index++;
		scanf("%ld %ld %ld%*c", &A, &B, &C);
		cout << "Case #" << index << ": ";
		if(A+B > C)
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
	}
	return 0;
}