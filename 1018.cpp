// PAT B1001 P85
#include <iostream>
using namespace std;

int main()
{
	int n=0;
	int step=0;
	cin >> n;
	while (n!=1)
	{
		if(n%2==0)
		{
			n = n/2;
		}
		else
		{
			n = (3*n+1)/2;
		}
		step++;
	}
	cout << step << endl;
	return 0;
}
