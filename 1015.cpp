// 按行读取文本测试

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	clock_t start;
	clock_t end;
	start = clock();
	freopen("/home/ubuntu/tmp/fuck.in", "r", stdin);
	char buff[100];
	for(int i=0; i<1000000;i++)
	{
		//scanf("%[^\n]%*c", buff);
		//scanf("%s", buff);
		//cin.getline(buff, 100);
		//cin >> buff;
		fgets(buff, 100, stdin);	//实验证明fgets是最好的按行读取文本的方式

	}
	//printf("%s\n", buff);
	end = clock();
	cout << end - start << endl;
	char cache[100];
	for(int i=0; i<100; i++)
	{

	}
	return 0;
}