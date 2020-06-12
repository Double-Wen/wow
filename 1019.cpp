// PAT B1004
#include <iostream>
using namespace std;

struct Student
{
	char name[100];
	char id[100];
	int score;
};

int main()
{
	int n=0;
	cin >> n;
	Student stu[n];
	Student *foo = new Student[3];
	int max=0;
	int min=0;
	for(int i=0; i<n; i++)
	{
		cin >> stu[i].id;
		cin >> stu[i].name;
		cin >> stu[i].score;
	}
	for(int i=0;i<n; i++)
	{
		if(stu[i].score > stu[max].score)
		{
			max = i;
		}
		if(stu[i].score < stu[min].score)
		{
			min = i;
		}
	}
	cout << stu[max].id << " " << stu[max].name << endl;
	cout << stu[min].id << " " << stu[min].name << endl;
	return 0;
}