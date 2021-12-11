#include <iostream>
using namespace std;
int qu(int, int);

int main()
{
	int a, b;
	cin >> a >> b;

	cout << qu(a, b);

	return 0;
}

int qu(int x, int y)
{
	return ((x > y) ? x : y);
}