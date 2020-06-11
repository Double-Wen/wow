// sscanf的基本使用

#include <iostream>
using namespace std;

int main()
{
	char buff[100];
	char foo[100]="fresgr esgsgrs erfs";
	sscanf(foo, "%s", buff);
	sprintf(foo, "%s %s", buff, buff);
	puts(foo);
	puts(buff);
	cin.getline(foo, 10000);
	for(int i=0; i<10; i++)
	{
		scanf("%s%*c", buff);
		puts(buff);
	}
	return 0;
}