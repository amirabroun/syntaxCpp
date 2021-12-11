#include <iostream>
using namespace std;

class myclass
{
	public:
		int speed(int maxspeed);
};
int myclass :: speed(int maxspeed)
{
	return maxspeed *2;
}
int main()
{
	int x;
	myclass a;
	cout <<	a.speed(2000);

	return 0;
}
