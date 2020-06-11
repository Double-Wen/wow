// 结构体的基本使用

#include <iostream>
using namespace std;

struct Hello
{
	int a=1;
	int b=2;
 public:
	Hello() {}
};

class World
{
	int a=1;
	int b=2;
 public:
	World() {}
};

int main()
{
	Hello *hello = new Hello();
	World *world = new World();
	Hello foo = Hello();
	cout << hello->a << " " << hello->b << endl;
	return 0;
}