// cstring的基本使用

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char foo[100];
	char bar[100];
	for(int i=0; i<10; i++)
	{
		cin.getline(foo, 100);
		cin.getline(bar, 100);
		puts(foo);
		puts(bar);
		cout << strcmp(foo, bar) << endl;
//		printf("%ld\n", strlen(foo));
	}

	return 0;
}