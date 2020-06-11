//

#include <iostream>
using namespace std;
int main()
{
	cout << "fesrfge" << endl;
	string buff;
	getline(cin, buff, '\n');
	cout << buff << endl;
	for(int i=0; i<5; i++)
	{
		getline(cin, buff, '\n');
		cout << buff << endl;
	}
	return 0;
}