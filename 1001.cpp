// 输入字符串然后输出字符串

#include <iostream>
using namespace std;
int main()
{
	string buff;
	getline(cin, buff, '\n');
	for(int i=0; i<buff.length(); i++)
	{
		printf("%c", buff[i]);
	}
	printf("\n");
	return 0;
}