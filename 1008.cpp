// strcpy和strcat的基本使用

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char foo[100];
	char bar[100];
	cin.getline(foo, 100);
	cin.getline(bar, 100);
	puts(foo);
	puts(bar);
	//strcpy(foo, bar);
	strcat(foo, bar);
	puts(foo);
	puts(bar);

	return 0;
}