// 自定义的strtoi字符串中提取数字的类似物

#include <iostream>
using namespace std;
int main()
{
	string buff;
	int foo[100];
	getline(cin, buff, '\n');
	int index=0;
	for(int i=0; i<buff.length(); i++)
	{
		if(buff[i] <= '9' && buff[i] >= '0')
		{
			foo[index] = foo[index]*10 + buff[i] -'0';
		}
		else
		{
			if(i>0 && buff[i-1] <='9' && buff[i-1] >='0')
				index++;
		}
	}
	if(buff[buff.length()-1] <= '9' && buff[buff.length()-1] >= '0')
	{
		index++;
	}
	for(int i=0; i<index; i++)
	{
		cout << foo[i] << endl;
	}
	return 0;
}