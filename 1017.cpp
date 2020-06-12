// 测试clock计时

#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;
int main()
{
	clock_t start = clock();
	clock_t ends;
	usleep(1);
	cout << endl;
//	for(int i=0; i<10; i++)
//	{
//		cout << i << endl;
//		sleep(1);
//	}
	usleep(1);
	cout << endl;
	usleep(1);
	ends = clock();
	sleep(20);
	cout << ends - start << endl;
	return 0;
}