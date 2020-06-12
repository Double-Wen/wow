// 测试fgets

#include <iostream>
using namespace std;

int main()
{
	char buff[100];
	for(int i=0; i<0; i++)
	{
		fgets(buff, 100, stdin);

		fputs(buff, stdout);

	}
	while(fgets(buff, 100, stdin))
	{
		fputs(buff, stdout);
	}
	return 0;
}