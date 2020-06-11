// 基本输入输出

#include <iostream>
using namespace std;
int main()
{
	char buff[100];
	scanf("%s", buff);
	printf("%s\n", buff);
	getchar();
	char foo[100][100];
	for(int i=0; i<10; i++)
	{
//		for(int j=0; j<30; j++)
//		{
//			foo[i][j] = getchar();
//			if(foo[i][j] == '\n')
//			{
//				foo[i][j] = '\0';
//				break;
//			}
//		}
		cin.getline(foo[i], 20);
		puts(foo[i]);
		for(int j=0; j<30; j++)
		{
			if(foo[i][j]!='\0')
			{
				putchar(foo[i][j]);
			}
			else
			{
				putchar('\n');
				break;
			}
		}
	}

	return 0;
}