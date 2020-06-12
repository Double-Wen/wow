// getline基本使用

#include <iostream>
using namespace std;

int main()
{
	string buff;
	getline(cin, buff);
	char foo[100];
	cin.getline(foo, 100);
	cout << buff << endl;
	return 0;
}
